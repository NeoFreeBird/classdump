//
#ifndef PTVCopyrightViolationView_h
#define PTVCopyrightViolationView_h
@import Foundation;

#include "PTVButton.h"
#include "PTVCopyrightViolation.h"
#include "PTVCopyrightViolationViewDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UILabel, UIStackView, UITextView, UIView;

@interface PTVCopyrightViolationView : UIView <UITextViewDelegate> {
    /* instance variables */
    _Bool _isDisputing;
}

@property (readonly, nonatomic) UILabel *headerTitleLabel;
@property (readonly, nonatomic) UITextView *headerSubtitleView;
@property (readonly, nonatomic) UIStackView *buttonsView;
@property (readonly, nonatomic) PTVButton *primaryActionButton;
@property (readonly, nonatomic) PTVButton *secondaryActionButton;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (weak, nonatomic) id <PTVCopyrightViolationViewDelegate> delegate;
@property (readonly, nonatomic) PTVCopyrightViolation *violation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)BackgroundColor;
+ (id)HeaderTitleFont;
+ (id)HeaderTitleColor;
+ (id)HeaderSubtitleFont;
+ (id)HeaderSubtitleColor;
+ (id)PrimaryButtonBackgroundColor;
+ (id)PrimaryButtonTitleColor;
+ (id)PrimaryButtonFont;
+ (id)SecondaryButtonFont;
+ (id)SecondaryButtonTitleColor;
+ (id)HeaderSubtitleAttributes;
+ (id)HeaderSubtitleLinkAttributes;

/* instance methods */
- (id)initWithDelegate:(id)delegate copyrightViolation:(id)violation;
- (void)didMoveToSuperview;
- (_Bool)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (id)AttributedSubtitleFromDelimitedString:(id)string;
- (void)updateViewState;
- (void)didConfirmViolation;
- (void)didDisputeViolation;
- (void)didSelectHasBroadcastingRights;
- (void)didSelectDismiss;
- (void)willSubmitDispute;
- (void)didCompleteDispute:(id)dispute;
- (void)showActivityIndicatorAnimated:(_Bool)animated;
- (void)hideActivityIndicatorAnimated:(_Bool)animated;

@end

#endif /* PTVCopyrightViolationView_h */
