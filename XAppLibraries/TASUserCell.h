//
#ifndef TASUserCell_h
#define TASUserCell_h
@import Foundation;

#include "TASCommunityParticipantBadge.h"
#include "TASUserModel-Protocol.h"
#include "TASUserModelObserver-Protocol.h"
#include "TASUserReactionEmojiView.h"
#include "TUIAvatarImageView.h"
#include "TUIUserBadger.h"

@class TFNBadgesImageView, TIPImagePipeline, UICollectionViewCell, UILabel, UIStackView, UIView;

@interface TASUserCell : UICollectionViewCell <TASUserModelObserver>

@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) TFNBadgesImageView *badgeImageView;
@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) TASUserReactionEmojiView *reactionEmojiView;
@property (readonly, nonatomic) TASCommunityParticipantBadge *communityParticipantBadge;
@property (readonly, nonatomic) UIStackView *nameAndBadgeStackView;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) TUIUserBadger *userBadger;
@property (retain, nonatomic) id <TASUserModel> userModel;
@property (nonatomic) _Bool usesAdaptiveColors;
@property (readonly, nonatomic) UIView *avatarImageView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_primaryTextColor;
- (id)_secondaryTextColor;
- (void)_update;
- (void)_updateCommunityBadge;
- (void)_updateBadgeImageViewVisibility;
- (void)_updateAccessoryViewVisibility;
- (id)_accessoryCallingView;
- (id)_accessoryImageView;
- (id)_accessoryActivityIndicatorView;
- (id)_accessoryTalkingView;
- (void)presentAnimatedReactionEmoji:(id)emoji;
- (void)prepareForReuse;
- (void)userModelDidUpdate:(id)update;
- (void)_updateRaisedHandEmojiAnimated:(_Bool)animated;

@end

#endif /* TASUserCell_h */
