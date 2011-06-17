/*
 * baudot.h
 *
 * Copyright (C) 2011 Kamal Mostafa <kamal@whence.com>
 *
 * NO LICENSE HAS BEEN SPECIFIED OR GRANTED FOR THIS WORK.
 *
 */


void
baudot_reset();


/*
 * returns nonzero if *char_outp was stuffed with an output character
 */
int
baudot( unsigned char databits, char *char_outp );