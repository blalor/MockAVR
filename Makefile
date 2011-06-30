SILENT = @

C_SRC     = $(foreach dir,. src,$(wildcard $(dir)/*.c))
ALL_OBJS  = $(C_SRC:.c=.o)
DEP_FILES = $(ALL_OBJS:.o=.d)

-include $(DEP_FILES)

CPPFLAGS = -Iinclude

## http://software.intel.com/en-us/articles/ld-symbols-not-found-when-linking-library-containing-no-executable-functions/
## without "-fno-common", mock_io.o is never searched by the linker when it's 
## part of libMockAVR.a. This causes a linker error, that _virtualTIMSK (for 
## example) is undefined.  I guess it's possible that I could also get around
## this by initializing the variables…
CFLAGS   = --std=c99 -Wall -Werror -fdiagnostics-show-option -fno-common -Os

ARFLAGS  = rs -c
# add "v" for verbose, remove "-c"

# override built-in rule to generate dependency lines with "gcc -M …"
# default: $(COMPILE.c) $(OUTPUT_OPTION) $<
.c.o:
	@echo "compiling $<"
	$(SILENT) $(CC) $(CFLAGS) $(CPPFLAGS) \
		-M -MF $(subst .o,.d,$@) -MT "$@ $(subst .o,.d,$@)" $<
	$(SILENT) $(COMPILE.c) $(OUTPUT_OPTION) $<
   
%.a:
	@echo "creating $@"
	$(SILENT) $(AR) $(ARFLAGS) $@ $?
	$(SILENT) ranlib $@


.PHONY: all
all: libMockAVR.a

.PHONY: clean
clean:
	@echo cleaning
	$(SILENT) rm -f $(ALL_OBJS) $(DEP_FILES) libMockAVR.a

# file targets:
libMockAVR.a: src/mock_io.o
