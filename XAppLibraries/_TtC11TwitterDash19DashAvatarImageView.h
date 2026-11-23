//
#ifndef _TtC11TwitterDash19DashAvatarImageView_h
#define _TtC11TwitterDash19DashAvatarImageView_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TUIAvatarImageView.h"

@class _$sSo17TFNTwitterAccountCSg;

@interface TwitterDash.DashAvatarImageView : TUIAvatarImageView // (Swift)

@property (nonatomic, retain) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)updateUserFromAccount;

@end

#endif /* _TtC11TwitterDash19DashAvatarImageView_h */
