//
#ifndef TFNConfettiShapeContent_h
#define TFNConfettiShapeContent_h
@import Foundation;

#include "TFNConfettiObjCContent.h"

@interface TFNConfettiShapeContent : TFNConfettiObjCContent { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 shape;
    B24@0:8@"NSString"16 color;
    B24@0:8@"NSString"16 size;
}

/* instance methods */
- (id)initWithShape:(long long)shape color:(id)color size:(struct CGSize { double x0; double x1; })size;
- (id)init;

@end

#endif /* TFNConfettiShapeContent_h */
