//
#ifndef T1ProfileVerificationPolicyView_h
#define T1ProfileVerificationPolicyView_h
@import Foundation;

#include "T1ProfileVerificationPolicyViewDelegate-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSString, TFNAttributedTextView, TFNButton, TFSTwitterBadgeViolationResponse, UIView;

@interface T1ProfileVerificationPolicyView : UIView <TFNAttributedTextViewDelegate>

@property (retain, nonatomic) TFSTwitterBadgeViolationResponse *badgeViolationResponse;
@property (retain, nonatomic) TFNAttributedTextView *titleView;
@property (retain, nonatomic) TFNAttributedTextView *descriptionView;
@property (retain, nonatomic) UIView *profileCompletionViolationView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *accountSecurityViolationView;
@property (retain, nonatomic) TFNButton *gotItButton;
@property (weak, nonatomic) id <T1ProfileVerificationPolicyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithBadgeViolationResponse:(id)response;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_t1_didTapProfileCompletionViolationView:(id)view;
- (void)_t1_didTapAccountSecurityViolationView:(id)view;
- (void)_t1_didTapGotItButton:(id)button;

@end

#endif /* T1ProfileVerificationPolicyView_h */
