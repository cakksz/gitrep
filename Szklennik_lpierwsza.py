#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Szklennik_lpierwsza.py
#  
#  Copyright 2018 kl2ag2 <kl2ag2@ubu03>


def main(args):
    n = int(input("Wprowadź liczbę: "))
    i = 2
    
    while i * i <= n:
        if n%i == 0:
            print("Liczba złożona")
            return 0
        i += 1
    else:
        print("Liczba pierwsza")
    return 0
 
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
