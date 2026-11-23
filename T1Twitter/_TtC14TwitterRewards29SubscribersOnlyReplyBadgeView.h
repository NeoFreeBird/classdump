//
#ifndef _TtC14TwitterRewards29SubscribersOnlyReplyBadgeView_h
#define _TtC14TwitterRewards29SubscribersOnlyReplyBadgeView_h
@import Foundation;

@class NSString, UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface TwitterRewards.SubscribersOnlyReplyBadgeView : UIView { // (Swift)
    /* instance variables */
    __C.UIView backgroundPill;
    __C.UIImageView lockIconView;
    __C.UILabel titleLabel;
}

@property (nonatomic) _Bool isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)tfn_fontSizeChanged;
- (void)layoutSubviews;

@end

#endif /* _TtC14TwitterRewards29SubscribersOnlyReplyBadgeView_h */
