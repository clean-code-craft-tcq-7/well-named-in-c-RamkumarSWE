#include <stdio.h>

#ifndef COLORCODING_H
#define COLORCODING_H

#define MAXCOLORPAIRNUMBER 25
#define MAX_COLORPAIR_NAME_CHARS 16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintColorPairs(void);

#endif