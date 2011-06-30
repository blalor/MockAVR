#ifndef MOCK_AVR_INTERRUPT_H
#define MOCK_AVR_INTERRUPT_H

#ifdef __cplusplus
    #define __isr_extern extern "C"
#else
    #define __isr_extern 
#endif

/*
    This is a total kludge and won't work for more than one ISR with a given 
    name in the entire project.
 */
#define ISR(vector) \
    /* ##__VA_ARGS__ */ \
    __isr_extern void ISR_##vector (void); \
    void ISR_##vector (void)

extern void ISR_PCINT2_vect(void);

#endif

