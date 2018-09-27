#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pentle_cw_4.py
#

def main(args):
	for i in range(10, 101):
		if i %2 ==0 and i %3 == 0:
			print (i)

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))

