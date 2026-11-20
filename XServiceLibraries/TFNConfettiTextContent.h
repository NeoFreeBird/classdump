//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
