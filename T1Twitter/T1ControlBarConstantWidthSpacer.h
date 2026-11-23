//
#ifndef T1ControlBarConstantWidthSpacer_h
#define T1ControlBarConstantWidthSpacer_h
@import Foundation;

@class TAVControlBarItem, UIView;

@interface T1ControlBarConstantWidthSpacer : TAVControlBarItem

@property (retain, nonatomic) UIView *constantWidthSpaceView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier width:(double)width;
- (id)view;

@end

#endif /* T1ControlBarConstantWidthSpacer_h */
