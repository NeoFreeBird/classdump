//
#ifndef PTVParticipantUserTableViewCell_h
#define PTVParticipantUserTableViewCell_h
@import Foundation;

#include "PTVProfileImageView.h"
#include "PTVTableViewCell.h"

@class UIButton, UILabel;

@interface PTVParticipantUserTableViewCell : PTVTableViewCell {
    /* instance variables */
    _Bool _isBlocked;
    _Bool _isLoggedInUser;
}

@property (retain, nonatomic) PTVProfileImageView *profileImage;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;

/* class methods */
+ (struct CGSize { double x0; double x1; })PreferredProfileSize;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)followUnfollowPressed;
- (void)setIsBlocked:(_Bool)blocked;
- (void)setIsLoggedInUser:(_Bool)user;
- (void)accessoryButtonAlphaState;

@end

#endif /* PTVParticipantUserTableViewCell_h */
