//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TwitterRewards16BadgeBenefitView_h
#define _TtC14TwitterRewards16BadgeBenefitView_h
@import Foundation;

@class TwitterRewards.BadgeBenefitView.TimelineTweetView, TwitterRewards.PlaceholderTextArea, TwitterRewards.SuperFollowsMarketingPageUserDataSource ?, TwitterRewards.TweetCardView, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo18TUIAvatarImageViewC, _$sSo7UILabelC;

@interface TwitterRewards.BadgeBenefitView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat tweetHeight;
    nominal type descriptor for CoreGraphics.CGFloat tweetWidth;
    nominal type descriptor for CoreGraphics.CGFloat timelineHeight;
    nominal type descriptor for CoreGraphics.CGFloat timelineWidth;
    TwitterRewards.TweetCardView timelineCard;
    TwitterRewards.BadgeBenefitView.TimelineTweetView topTimelineTweetView;
    TwitterRewards.BadgeBenefitView.TimelineTweetView bottomTimelineTweetView;
    TwitterRewards.TweetCardView tweetCard;
    nominal type descriptor for CoreGraphics.CGFloat tweetAvatarHeight;
    TwitterRewards.SuperFollowsMarketingPageUserDataSource ? userDataSource;
    __C.TUIAvatarImageView tweetAvatarView;
    __C.UILabel tweetFullNameLabel;
    __C.UILabel tweetUsernameLabel;
    __C.UIImageView inlineBadgeView;
    TwitterRewards.PlaceholderTextArea tweetTextView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14TwitterRewards16BadgeBenefitView_h */
