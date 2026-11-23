//
#ifndef PTVTwitterUserProfileModalView_h
#define PTVTwitterUserProfileModalView_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVMergeParticipantUser.h"
#include "PTVProfileImageView.h"
#include "PTVTwitterUserProfileModalViewDelegate-Protocol.h"

@class UIImageView, UILabel, UITextView, UIView;

@interface PTVTwitterUserProfileModalView : UIView

@property (retain, nonatomic) PTVMergeParticipantUser *user;
@property (nonatomic) _Bool isReadOnly;
@property (retain, nonatomic) UILabel *youAreSeeingLabel;
@property (retain, nonatomic) UILabel *switchToTwitterProfileLabel;
@property (retain, nonatomic) PTVProfileImageView *profileImageView;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) UIImageView *twitterVerifiedImageView;
@property (retain, nonatomic) UIView *usernameVerifiedContainerView;
@property (retain, nonatomic) PTVExtendedButton *settingsButton;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } settingsIconSize;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UITextView *descriptionTextView;
@property (readonly, weak, nonatomic) id <PTVTwitterUserProfileModalViewDelegate> delegate;
@property (nonatomic) long long presentationState;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateUser:(id)user isReadOnly:(_Bool)only;
- (void)settingsButtonPressed;
- (void)addAndConstrainSubviews;
- (void)clearUserLoadingState;
- (id)descriptionTextViewAttributedString:(id)string isVerified:(_Bool)verified;

@end

#endif /* PTVTwitterUserProfileModalView_h */
