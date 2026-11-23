//
#ifndef T1RankBadgeAvatarContainerView_h
#define T1RankBadgeAvatarContainerView_h
@import Foundation;

@class TUIAvatarImageView, TUIRankBadgeView, UIView;

@interface T1RankBadgeAvatarContainerView : UIView

@property (readonly, nonatomic) TUIAvatarImageView *avatarView;
@property (readonly, nonatomic) TUIRankBadgeView *rankBadgeView;
@property (nonatomic) long long rank;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;

@end

#endif /* T1RankBadgeAvatarContainerView_h */
