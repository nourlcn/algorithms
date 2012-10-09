#!/usr/bin/env python
# -*- coding: utf-8 -*-
#


s="cba"

def main():
    l = len(s)
    total=0
    while l-1 >= 0:
        x = {'a':1,'b':2,'c':3,'d':4}[s[l-1]]
        total = total + x*pow(4, l-1)
        l = l-1
        
    print "result is ", total

        
if __name__ == '__main__':

	main()

