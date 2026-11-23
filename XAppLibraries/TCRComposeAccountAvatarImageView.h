//
#ifndef TCRComposeAccountAvatarImageView_h
#define TCRComposeAccountAvatarImageView_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TUIAvatarImageView.h"

@interface TCRComposeAccountAvatarImageView : TUIAvatarImageView

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) struct CGSize { double x0; double x1; } avatarSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)_tcr_main_updateUser;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_tcr_notification_accountUserDidUpdate:(id)update;

@end

#endif /* TCRComposeAccountAvatarImageView_h */
