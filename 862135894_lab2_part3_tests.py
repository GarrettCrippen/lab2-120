

tests = [ {'description': 'PINA: 0x00 => PORTC: 0x04',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x04)],
    },
    {'description': 'PINA: 0x0F => PORTC: 0x80',
    'steps': [ {'inputs': [('PINA',0x0F)], 'iterations': 5 } ],
    'expected': [('PORTC',0x80)],
    },
    {'description': 'PINA: 0x02 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x02)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
	{'description': 'PINA: 0x03 => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
    {'description': 'PINA: 0x07 => PORTC: 0x01',
    'steps': [ {'inputs': [('PINA',0x07)], 'iterations': 5 } ],
    'expected': [('PORTC',0x01)],
    },
    ]
#watch = ['PORTC']

