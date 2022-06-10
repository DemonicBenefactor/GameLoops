#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  timer.py

# import game.py   -- should include events() update() render()
import time


def main(args):
    global counter # For testing only
    counter = 0 # For testing only
    while True:
        frameStart = time.time()
        # events()
        # update()
        render()
        delayTime(100./60, frameStart)
    return 0


def delayTime(delay, start):
    frameTime = time.time()
    while frameTime - start < delay:
        frameTime = time.time()


def render(): # For testing only
    global counter # For testing only
    print counter # For testing only
    counter += 1 # For testing only


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
