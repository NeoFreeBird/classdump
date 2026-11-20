//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNToastDefaultContentView_h
#define TFNToastDefaultContentView_h
@import Foundation;

#include "TFNButton.h"
#include "TFNToastContentViewDelegate-Protocol.h"
#include "TFNToastContentViewable-Protocol.h"
#include "TFNToastViewModel-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UILabel, UIStackView, UITapGestureRecognizer, UIView;

@interface TFNToastDefaultContentView : UIView <UIGestureRecognizerDelegate, TFNToastContentViewable>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UIView *iconAccessoryView;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) TFNButton *alternateActionButton;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) _Bool isAnimatingProgressView;
@property (retain, nonatomic) NSArray *progressViewBeginningConstraints;
@property (retain, nonatomic) NSArray *progressViewEndingConstraints;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UIStackView *mainContainerStackView;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) id <TFNToastViewModel> toast;
@property (retain, nonatomic) UITapGestureRecognizer *primaryActionTapRecognizer;
@property (weak, nonatomic) id <TFNToastContentViewDelegate> delegate;
@property (nonatomic) _Bool shouldAnimateAlternateActionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toast:(id)toast;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toast:(id)toast toastsUpdateEnabled:(_Bool)enabled;
- (void)updateConstraints;
- (void)didPresentContentViewWithInterval:(double)interval;
- (void)_tfn_updateProgressViewConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_tfn_primaryActionTapped:(id)tapped;
- (void)_tfn_alternateActionButtonTapped:(id)tapped;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;

@end

#endif /* TFNToastDefaultContentView_h */
