

tests = [ {'description': 'PINA: 0x00 , PINB: 0x00, PINC: 0x00 => PORTD: 0x00',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x00),('PINC',0x00)], 'iterations': 5 } ],
    'expected': [('PORTD',0x00)],
    },
    {'description': 'PINA: 0xC3 , PINB: 0x03, PINC: 0x03 => PORTD: 0x23',
    'steps': [ {'inputs': [('PINA',0xC3),('PINB',0x03),('PINC',0x03)], 'iterations': 5 } ],
    'expected': [('PORTD',0x23)],
    },
    {'description': 'PINA: 0x55 , PINB: 0x03, PINC: 0x032 => PORTD: 0x22',
    'steps': [ {'inputs': [('PINA',0x55),('PINB',0x03),('PINC',0x032)], 'iterations': 5 } ],
    'expected': [('PORTD',0x22)],
    },
        {'description': 'PINA: 0xFF , PINB: 0xFF, PINC: 0x0FF => PORTD: 0xFD',
    'steps': [ {'inputs': [('PINA',0xFF),('PINB',0xFF),('PINC',0xFF)], 'iterations': 5 } ],
    'expected': [('PORTD',0xFD)],
    },
        {'description': 'PINA: 0x55 , PINB: 0x030, PINC: 0x00 => PORTD: 0x20',
    'steps': [ {'inputs': [('PINA',0x55),('PINB',0x30),('PINC',0x000)], 'iterations': 5 } ],
    'expected': [('PORTD',0x20)],
    },

    ]
#watch = ['PORTD']

