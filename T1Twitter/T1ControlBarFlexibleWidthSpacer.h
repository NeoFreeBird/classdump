//
#ifndef T1ControlBarFlexibleWidthSpacer_h
#define T1ControlBarFlexibleWidthSpacer_h
@import Foundation;

@class TAVControlBarItem, UIView;

@interface T1ControlBarFlexibleWidthSpacer : TAVControlBarItem

@property (retain, nonatomic) UIView *flexibleSpaceView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier minimumWidth:(double)width;
- (id)initWithIdentifier:(id)identifier;
- (id)view;

@end

#endif /* T1ControlBarFlexibleWidthSpacer_h */
