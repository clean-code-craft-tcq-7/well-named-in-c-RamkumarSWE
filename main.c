#include <stdio.h>
#include "ColorCoding.h"
#include "Test.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    printf("\n\nPrinting Color and Numbers\n\n")
    PrintColorPairs();

    return 0;
}
