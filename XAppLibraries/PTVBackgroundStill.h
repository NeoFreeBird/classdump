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
