//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie13RepeaterLayer_h
#define _TtC6Lottie13RepeaterLayer_h
@import Foundation;

#include "_TtC6Lottie18BaseAnimationLayer.h"

@class Lottie.RepeaterTransform;

@interface Lottie.RepeaterLayer : Lottie.BaseAnimationLayer { // (Swift)
    /* instance variables */
    Lottie.RepeaterTransform repeaterTransform;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;
- (id)init;

@end

#endif /* _TtC6Lottie13RepeaterLayer_h */
