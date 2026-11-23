//
#ifndef _TtC9XSettings20SettingsUserListCell_h
#define _TtC9XSettings20SettingsUserListCell_h
@import Foundation;

@class UITableViewCell, _$s10Foundation3URLVMn ?, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo18NSLayoutConstraintCSg, _$sSo7UILabelC, _$syycSg;

@interface XSettings.SettingsUserListCell : UITableViewCell { // (Swift)
    /* instance variables */
    __C.UIImageView avatarView;
    __C.UILabel nameLabel;
    __C.UIImageView badgeView;
    __C.UILabel usernameLabel;
    nominal type descriptor for XDesignSystem.Button actionButton;
    __C.NSLayoutConstraint? actionButtonWidthConstraint;
    nominal type descriptor for Foundation.URL ? avatarURL;
    (() -> ())? onAction;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC9XSettings20SettingsUserListCell_h */
