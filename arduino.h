#ifndef	_ARDUINO_H
#define	_ARDUINO_H

#include	<avr/io.h>

/*
	utility functions
*/

#ifndef		MASK
#define		MASK(PIN)				(1 << PIN)
#endif

/*
	magic I/O routines

	now you can simply SET_OUTPUT(STEP); WRITE(STEP, 1); WRITE(STEP, 0);
*/

#define		_READ(IO)					(IO ## _RPORT & MASK(IO ## _PIN))
#define		_WRITE(IO, v)			do { if (v) { IO ## _WPORT |= MASK(IO ## _PIN); } else { IO ## _WPORT &= ~MASK(IO ## _PIN); }; } while (0)
#define		_TOGGLE(IO)				(IO ## _RPORT = MASK(IO ## _PIN))

#define		_SET_INPUT(IO)		(IO ## _DDR &= ~MASK(IO ## _PIN))
#define		_SET_OUTPUT(IO)		(IO ## _DDR |=  MASK(IO ## _PIN))

#define		_GET_INPUT(IO)		((IO ## _DDR & MASK(IO ## _PIN)) == 0)
#define		_GET_OUTPUT(IO)		((IO ## _DDR & MASK(IO ## _PIN)) != 0)

// why double up on these macros? see http://gcc.gnu.org/onlinedocs/cpp/Stringification.html

#define		READ(IO)					_READ(IO)
#define		WRITE(IO, v)			_WRITE(IO, v)
#define		TOGGLE(IO)				_TOGGLE(IO)
#define		SET_INPUT(IO)			_SET_INPUT(IO)
#define		SET_OUTPUT(IO)		_SET_OUTPUT(IO)
#define		GET_INPUT(IO)			_GET_INPUT(IO)
#define		GET_OUTPUT(IO)		_GET_OUTPUT(IO)

/*
	ports and functions

	added as necessary or if I feel like it- not a comprehensive list!

	probably needs some #ifdefs for various chip types
*/

// UART
#define	RXD									DIO0
#define	TXD									DIO1



// timers and PWM
#define	OC0A								DIO6
#define	OC0B								DIO5
#define	OC1A								DIO9
#define	OC1B								DIO10
#define	OC2A								DIO11
#define	OC2B								DIO3

#define	ICP1								DIO8

/*
	pins
*/

#define DIO0_PIN		PINB0
#define DIO0_RPORT	PINB
#define DIO0_WPORT	PORTB
#define DIO0_DDR		DDRB

#define DIO1_PIN		PINB1
#define DIO1_RPORT	PINB
#define DIO1_WPORT	PORTB
#define DIO1_DDR		DDRB

#define DIO2_PIN		PINB2
#define DIO2_RPORT	PINB
#define DIO2_WPORT	PORTB
#define DIO2_DDR		DDRB

#define DIO3_PIN		PINB3
#define DIO3_RPORT	PINB
#define DIO3_WPORT	PORTB
#define DIO3_DDR		DDRB

#define DIO4_PIN		PINB4
#define DIO4_RPORT	PINB
#define DIO4_WPORT	PORTB
#define DIO4_DDR		DDRB

#define DIO5_PIN  PINB5
#define DIO5_RPORT	PINB
#define DIO5_WPORT	PORTB
#define DIO5_DDR		DDRB

#define DIO6_PIN  PINB6
#define DIO6_RPORT	PINB
#define DIO6_WPORT	PORTB
#define DIO6_DDR		DDRB

#define DIO7_PIN  PINB7
#define DIO7_RPORT	PINB
#define DIO7_WPORT	PORTB
#define DIO7_DDR		DDRB

#define DIO8_PIN  PIND0
#define DIO8_RPORT	PIND
#define DIO8_WPORT	PORTD
#define DIO8_DDR		DDRD

#define DIO9_PIN  PIND1
#define DIO9_RPORT	PIND
#define DIO9_WPORT	PORTD
#define DIO9_DDR		DDRD

#define DIO10_PIN  PIND2
#define DIO10_RPORT	PIND
#define DIO10_WPORT	PORTD
#define DIO10_DDR		DDRD

#define DIO11_PIN  PIND3
#define DIO11_RPORT	PIND
#define DIO11_WPORT	PORTD
#define DIO11_DDR		DDRD

#define DIO12_PIN  PIND4
#define DIO12_RPORT	PIND
#define DIO12_WPORT	PORTD
#define DIO12_DDR		DDRD

#define DIO13_PIN  PIND5
#define DIO13_RPORT	PIND
#define DIO13_WPORT	PORTD
#define DIO13_DDR		DDRD

#define DIO14_PIN  PIND6
#define DIO14_RPORT	PIND
#define DIO14_WPORT	PORTD
#define DIO14_DDR		DDRD

#define DIO15_PIN  PIND7
#define DIO15_RPORT	PIND
#define DIO15_WPORT	PORTD
#define DIO15_DDR		DDRD

#define DIO16_PIN  PINC0
#define DIO16_RPORT	PINC
#define DIO16_WPORT	PORTC
#define DIO16_DDR		DDRC

#define DIO17_PIN  PINC1
#define DIO17_RPORT	PINC
#define DIO17_WPORT	PORTC
#define DIO17_DDR		DDRC

#define DIO18_PIN  PINC2
#define DIO18_RPORT	PINC
#define DIO18_WPORT	PORTC
#define DIO18_DDR		DDRC

#define DIO19_PIN  PINC3
#define DIO19_RPORT	PINC
#define DIO19_WPORT	PORTC
#define DIO19_DDR		DDRC

#define DIO20_PIN  PINC4
#define DIO20_RPORT	PINC
#define DIO20_WPORT	PORTC
#define DIO20_DDR		DDRC

#define DIO21_PIN  PINC5
#define DIO21_RPORT	PINC
#define DIO21_WPORT	PORTC
#define DIO21_DDR		DDRC

#define DIO22_PIN  PINC6
#define DIO22_RPORT	PINC
#define DIO22_WPORT	PORTC
#define DIO22_DDR		DDRC

#define DIO23_PIN  PINC7
#define DIO23_RPORT	PINC
#define DIO23_WPORT	PORTC
#define DIO23_DDR		DDRC

#define DIO24_PIN  PINA7
#define DIO24_RPORT	PINA
#define DIO24_WPORT	PORTA
#define DIO24_DDR		DDRA

#define DIO25_PIN  PINA6
#define DIO25_RPORT	PINA
#define DIO25_WPORT	PORTA
#define DIO25_DDR		DDRA

#define DIO26_PIN  PINA5
#define DIO26_RPORT	PINA
#define DIO26_WPORT	PORTA
#define DIO26_DDR		DDRA

#define DIO27_PIN  PINA4
#define DIO27_RPORT	PINA
#define DIO27_WPORT	PORTA
#define DIO27_DDR		DDRA

#define DIO28_PIN  PINA3
#define DIO28_RPORT	PINA
#define DIO28_WPORT	PORTA
#define DIO28_DDR		DDRA

#define DIO29_PIN  PINA2
#define DIO29_RPORT	PINA
#define DIO29_WPORT	PORTA
#define DIO29_DDR		DDRA

#define DIO30_PIN  PINA1
#define DIO30_RPORT	PINA
#define DIO30_WPORT	PORTA
#define DIO30_DDR		DDRA

#define DIO31_PIN  PINA0
#define DIO31_RPORT	PINA
#define DIO31_WPORT	PORTA
#define DIO31_DDR		DDRA

#define AIO0_PIN		PINA0
#define AIO0_RPORT	PINA
#define AIO0_WPORT	PORTA
#define AIO0_DDR		DDRA

#define AIO1_PIN		PINA1
#define AIO1_RPORT	PINA
#define AIO1_WPORT	PORTA
#define AIO1_DDR		DDRA

#define AIO2_PIN  PINA2
#define AIO2_RPORT	PINA
#define AIO2_WPORT	PORTA
#define AIO2_DDR		DDRA

#define AIO3_PIN  PINA3
#define AIO3_RPORT	PINA
#define AIO3_WPORT	PORTA
#define AIO3_DDR		DDRA

#define AIO4_PIN  PINA4
#define AIO4_RPORT	PINA
#define AIO4_WPORT	PORTA
#define AIO4_DDR		DDRA

#define AIO5_PIN  PINA5
#define AIO5_RPORT	PINA
#define AIO5_WPORT	PORTA
#define AIO5_DDR		DDRA

#define AIO6_PIN  PINA5
#define AIO5_RPORT	PINA
#define AIO5_WPORT	PORTA
#define AIO5_DDR		DDRA

#define AIO7_PIN  PINA5
#define AIO5_RPORT	PINA
#define AIO5_WPORT	PORTA
#define AIO5_DDR		DDRA

/*
	timers
*/

// list of PWM-able pins and corresponding timers
// OC0A											DIO6
// OC0B											DIO5
// OC1A											DIO9
// OC1B											DIO10
// OC2A											DIO11
// OC2B											DIO3


#define	OC0A_PIN				DIO6
#define	OC0A_CMR				OCR0A
#define	OC0A_COM_PORT		TCCR0A
#define	OC0A_COM0				COM0A0
#define	OC0A_COM1				COM0A1
#define	OC0A_WGM0_PORT	TCCR0A
#define	OC0A_WGM0_PIN		WGM00
#define	OC0A_WGM1_PORT	TCCR0A
#define	OC0A_WGM1_PIN		WGM01
#define	OC0A_WGM2_PORT	TCCR0B
#define	OC0A_WGM2_PIN		WGM02
#define	OC0A_MSK_PORT		TIMSK0
#define	OC0A_MSK_PIN		OCIE0A
#define	OC0A_INT_PORT		TIFR0
#define	OC0A_INT_PIN		OCF0A

#define	OC0B_PIN		DIO5
#define	OC1A_PIN		DIO9
#define	OC1B_PIN		DIO10
#define	OC2A_PIN		DIO11
#define	OC2B_PIN		DIO3


#endif /* _ARDUINO_H */