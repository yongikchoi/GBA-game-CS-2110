#ifndef GAME_H
#define GAME_H

#include "gba.h"
#define CUBESIZE 5
#define CUBEROW 80
#define CUBECOL 120

                    /* TODO: */

            // Create any necessary structs //


struct cube {
 	int row;
 	int col;
 	int size;
 	u32 color;
} cube;

struct border {
	int toprow;
	int topcol;
	int bottomrow;
	int bottomcol;
	int leftrow;
	int leftcol;
	int rightrow;
	int rightcol;

	int width;
	int height;
	u32 topcolor;
	u32 bottomcolor;
	u32 leftcolor;
	u32 rightcolor;

	int increment;
} border;

//protoypes
void drawIntro(void);
void drawBorder(void);
void redrawBorder(void);
void reset(void);
void scoreTracker(int);


#endif
