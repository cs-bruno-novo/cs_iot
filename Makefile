BOARD_TAG = uno
include /usr/share/arduino/Arduino.mk

test:
	gcc genius_test.c main.c genius.c -o genius_test
