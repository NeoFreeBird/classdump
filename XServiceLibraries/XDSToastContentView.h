//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XDSToastContentView_h
#define XDSToastContentView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIView;

@interface XDSToastContentView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 containerStackView;
    B24@0:8@"NSString"16 mainContainerStackView;
    B24@0:8@"NSString"16 buttonContainerView;
    B24@0:8@"NSString"16 iconContainerView;
    B24@0:8@"NSString"16 labelContainerView;
    B24@0:8@"NSString"16 iconView;
    B24@0:8@"NSString"16 thumbnailImageView;
    B24@0:8@"NSString"16 messageLabel;
    B24@0:8@"NSString"16 detailLabel;
    B24@0:8@"NSString"16 alternateActionButton;
    B24@0:8@"NSString"16 progressView;
    B24@0:8@"NSString"16 iconAccessoryView;
    B24@0:8@"NSString"16 iconAccessoryContainerView;
    B24@0:8@"NSString"16 primaryActionTapRecognizer;
    B24@0:8@"NSString"16 staticConstraints;
    B24@0:8@"NSString"16 dynamicConstraints;
    B24@0:8@"NSString"16 progressViewBeginningConstraints;
    B24@0:8@"NSString"16 progressViewEndingConstraints;
    B24@0:8@"NSString"16 configuration;
    B24@0:8@"NSString"16 isAnimatingProgressView;
}

@property (nonatomic) _Bool shouldAnimateAlternateActionButton;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (id)initWithCoder:(id)coder;
- (void)updateConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didPresentContentWithInterval:(double)interval;
- (void)primaryActionTapped:(id)tapped;
- (void)alternateActionButtonTapped;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* XDSToastContentView_h */
