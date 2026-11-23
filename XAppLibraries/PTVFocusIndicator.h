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
