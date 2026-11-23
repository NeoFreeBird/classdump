//
#ifndef TFNConfettiTextContent_h
#define TFNConfettiTextContent_h
@import Foundation;

#include "TFNConfettiObjCContent.h"

@interface TFNConfettiTextContent : TFNConfettiObjCContent { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 text;
    B24@0:8@"NSString"16 font;
    B24@0:8@"NSString"16 color;
}

/* instance methods */
- (id)initWithText:(id)text font:(id)font color:(id)color;
- (id)init;

@end

#endif /* TFNConfettiTextContent_h */
