//
#ifndef PTVAcceptAsGuestButton_h
#define PTVAcceptAsGuestButton_h
@import Foundation;

#include "PTVExtendedButton.h"

@interface PTVAcceptAsGuestButton : PTVExtendedButton

@property (nonatomic) long long displayState;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (id)initWithDisplayState:(long long)state;
- (void)layoutSubviews;

@end

#endif /* PTVAcceptAsGuestButton_h */
