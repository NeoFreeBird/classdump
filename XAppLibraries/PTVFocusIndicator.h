//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVFocusIndicator_h
#define PTVFocusIndicator_h
@import Foundation;

#include "PTVFocusIndicatorDelegate-Protocol.h"

@class UIView;

@interface PTVFocusIndicator : UIView {
    /* instance variables */
    UIView *_middleDot;
}

@property (readonly, nonatomic) UIView *circleView;
@property (weak, nonatomic) id <PTVFocusIndicatorDelegate> delegate;

/* instance methods */
- (id)initWithCenterPoint:(struct CGPoint { double x0; double x1; })point delegate:(id)delegate;
- (void)animate;

@end

#endif /* PTVFocusIndicator_h */
