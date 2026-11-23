//
#ifndef TFNBinaryChoiceControl_h
#define TFNBinaryChoiceControl_h
@import Foundation;

#include "TFNButton.h"

@class UIView;
@protocol TFNBinaryChoiceDelegate;

@interface TFNBinaryChoiceControl : UIView

@property (weak, nonatomic) id <TFNBinaryChoiceDelegate> delegate;
@property (readonly, nonatomic) TFNButton *acceptButton;
@property (readonly, nonatomic) TFNButton *declineButton;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForControl;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_acceptButtonTapped:(id)tapped event:(id)event;
- (void)_declineButtonTapped:(id)tapped event:(id)event;

@end

#endif /* TFNBinaryChoiceControl_h */
