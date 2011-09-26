#ifndef MOCK_AVR_IO_H
#define MOCK_AVR_IO_H

#include <avr/sfr_defs.h>
#include <stdint.h>

#define DDRB (virtualDDRB)
extern volatile uint8_t virtualDDRB;

#define PORTB (virtualPORTB)
extern volatile uint8_t virtualPORTB;

#define PINB (virtualPINB)
extern volatile uint8_t virtualPINB;

#define USIBR (virtualUSIBR)
extern volatile uint8_t virtualUSIBR;

#define USICR (virtualUSICR)
extern volatile uint8_t virtualUSICR;

#define USIDR (virtualUSIDR)
extern volatile uint8_t virtualUSIDR;

#define USISR (virtualUSISR)
extern volatile uint8_t virtualUSISR;

#define GIFR (virtualGIFR)
extern volatile uint8_t virtualGIFR;

#define GIMSK (virtualGIMSK)
extern volatile uint8_t virtualGIMSK;

#define PCMSK (virtualPCMSK)
extern volatile uint8_t virtualPCMSK;

// timer0
#define GTCCR (virtualGTCCR)
extern volatile uint8_t virtualGTCCR;

#define TCCR0A (virtualTCCR0A)
extern volatile uint8_t virtualTCCR0A;

#define TCCR0B (virtualTCCR0B)
extern volatile uint8_t virtualTCCR0B;

#define OCR0A (virtualOCR0A)
extern volatile uint8_t virtualOCR0A;

#define OCR0B (virtualOCR0B)
extern volatile uint8_t virtualOCR0B;

#define TIMSK (virtualTIMSK)
extern volatile uint8_t virtualTIMSK;

#define TIFR (virtualTIFR)
extern volatile uint8_t virtualTIFR;

#define TIFR0 (virtualTIFR0)
extern volatile uint8_t virtualTIFR0;

#define TCNT0 (virtualTCNT0)
extern volatile uint8_t virtualTCNT0;

// timer1
#define TCCR1 (virtualTCCR1)
extern volatile uint8_t virtualTCCR1;

#define OCR1A (virtualOCR1A)
extern volatile uint8_t virtualOCR1A;

#define OCR1B (virtualOCR1B)
extern volatile uint8_t virtualOCR1B;

#define OCR1C (virtualOCR1C)
extern volatile uint8_t virtualOCR1C;

#define TCNT1 (virtualTCNT1)
extern volatile uint8_t virtualTCNT1;

// timer2
#define TCCR2A (virtualTCCR2A)
extern volatile uint8_t virtualTCCR2A;

#define TCCR2B (virtualTCCR2B)
extern volatile uint8_t virtualTCCR2B;

#define OCR2A (virtualOCR2A)
extern volatile uint8_t virtualOCR2A;

#define OCR2B (virtualOCR2B)
extern volatile uint8_t virtualOCR2B;

#define TIMSK2 (virtualTIMSK2)
extern volatile uint8_t virtualTIMSK2;

#define TIFR2 (virtualTIFR2)
extern volatile uint8_t virtualTIFR2;

#define TCNT2 (virtualTCNT2)
extern volatile uint8_t virtualTCNT2;

// uart0
#define UBRR0 (virtualUBRR0)
extern volatile uint16_t virtualUBRR0;

#define UCSR0A (virtualUCSR0A)
extern volatile uint8_t virtualUCSR0A;

#define UCSR0B (virtualUCSR0B)
extern volatile uint8_t virtualUCSR0B;

#define UDR0 (virtualUDR0)
extern volatile uint8_t virtualUDR0;

// twi
#define TWBR (virtualTWBR)
extern volatile uint8_t virtualTWBR;

#define TWCR (virtualTWCR)
extern volatile uint8_t virtualTWCR;

#define TWSR (virtualTWSR)
extern volatile uint8_t virtualTWSR;

#define TWDR (virtualTWDR)
extern volatile uint8_t virtualTWDR;

#define TWAR (virtualTWAR)
extern volatile uint8_t virtualTWAR;

#define TWAMR (virtualTWAMR)
extern volatile uint8_t virtualTWAMR;

// prr
#define PRR (virtualPRR)
extern volatile uint8_t virtualPRR;

// GTCCR
#define PSR0 0
#define PSR1 1





#define TSM  7

// TCCR0A
#define COM0A1 7
#define COM0A0 6
#define COM0B1 5
#define COM0B0 4


#define WGM01  1
#define WGM00  0

// TCCR0B
#define CS00  0
#define CS01  1
#define CS02  2
#define WGM02 3

// TCCR1
#define CTC1 7



#define CS13 3
#define CS12 2
#define CS11 1
#define CS10 0

// TIMSK
#define OCIE0A 4
#define OCIE1B 5
#define OCIE1A 6

// TIFR
#define OCF0A 4
#define OCF1B 5
#define OCF1A 6

// PORTB
#define PB0 0
#define PB1 1
#define PB2 2
#define PB3 3
#define PB4 4

// GIFR
#define PCIF 5

// GIMSK
#define PCIE 5

// PCMSK
#define PCINT0 0


#define PCINT3 3

// USICR
#define USISIE 7
#define USIOIE 6
#define USIWM1 5
#define USIWM0 4
#define USICS1 3
#define USICS0 2
#define USICLK 1
#define USITC  0

// UCSR0B
#define RXCIE0 7
#define TXCIE0 6
#define UDRIE0 5
#define RXEN0  4
#define TXEN0  3
#define UCSZ02 2
#define RXB80  1
#define TXB80  0

// TCCR2A
#define COM2A1 7
#define COM2A0 6
#define COM2B1 5
#define COM2B0 4


#define WGM21  1
#define WGM20  0

// TCCR2B
#define WGM22 3
#define CS22  2
#define CS21  1
#define CS20  0

// TWBR
#define TWBR0 0
#define TWBR1 1
#define TWBR2 2
#define TWBR3 3
#define TWBR4 4
#define TWBR5 5
#define TWBR6 6
#define TWBR7 7

// TWSR
#define TWPS0 0
#define TWPS1 1
#define TWS3 3
#define TWS4 4
#define TWS5 5
#define TWS6 6
#define TWS7 7

// TWAR
#define TWGCE 0
#define TWA0 1
#define TWA1 2
#define TWA2 3
#define TWA3 4
#define TWA4 5
#define TWA5 6
#define TWA6 7

// TWDR
#define TWD0 0
#define TWD1 1
#define TWD2 2
#define TWD3 3
#define TWD4 4
#define TWD5 5
#define TWD6 6
#define TWD7 7

// TWCR
#define TWIE 0
#define TWEN 2
#define TWWC 3
#define TWSTO 4
#define TWSTA 5
#define TWEA 6
#define TWINT 7

// TWAMR
#define TWAM0 0
#define TWAM1 1
#define TWAM2 2
#define TWAM3 3
#define TWAM4 4
#define TWAM5 5
#define TWAM6 6

// PRR
#define PRADC 0
#define PRUSART0 1
#define PRSPI 2
#define PRTIM1 3
#define PRTIM0 5
#define PRTIM2 6
#define PRTWI 7

#endif
