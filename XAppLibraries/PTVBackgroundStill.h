//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBackgroundStill_h
#define PTVBackgroundStill_h
@import Foundation;

#include "PTVBlurredImageView.h"

@class NSObject;

@interface PTVBackgroundStill : NSObject

@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) PTVBlurredImageView *backgroundView;

/* instance methods */
- (id)initWithBackgroundView:(id)view rotation:(double)rotation;
- (double)videoAspect;

@end

#endif /* PTVBackgroundStill_h */
