//
#ifndef _TtC14TwitterRewards32SuperFollowsSubscribersBadgeView_h
#define _TtC14TwitterRewards32SuperFollowsSubscribersBadgeView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface TwitterRewards.SuperFollowsSubscribersBadgeView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView iconView;
    __C.UILabel textLabel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC14TwitterRewards32SuperFollowsSubscribersBadgeView_h */
