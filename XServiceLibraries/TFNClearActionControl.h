//
#ifndef TFNClearActionControl_h
#define TFNClearActionControl_h
@import Foundation;

#include "TFNClearButton.h"
#include "TFNClearButtonGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIImage, UILabel, UIView;
@protocol TFNClearActionControlDelegate;

@interface TFNClearActionControl : UIView <UIGestureRecognizerDelegate> {
    /* instance variables */
    double _labelWidthLocalized;
    TFNClearButtonGestureRecognizer *_gestureRecognizer;
}

@property (readonly, nonatomic) UILabel *buttonLabel;
@property (readonly, nonatomic) TFNClearButton *clearButton;
@property (readonly, nonatomic) UIImage *xImage;
@property (readonly, nonatomic) NSLayoutConstraint *clearButtonWidth;
@property (nonatomic) _Bool clearButtonActive;
@property (weak, nonatomic) id <TFNClearActionControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)deactivateClearButton;
- (void)_setClearButtonActive:(_Bool)active animated:(_Bool)animated;
- (void)_clearButtonTapped:(id)tapped;
- (id)_buttonBackgroundImageForColor:(id)color;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_animateClearButtonBecomesActiveWithDuration:(double)duration;
- (void)_animateClearButtonBecomesInactiveWithDuration:(double)duration;

@end

#endif /* TFNClearActionControl_h */
