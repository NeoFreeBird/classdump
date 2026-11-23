//
#ifndef _TtC14TwitterRewards20ExclusiveContentView_h
#define _TtC14TwitterRewards20ExclusiveContentView_h
@import Foundation;

@class TwitterRewards.PlaceholderTextArea, TwitterRewards.SuperFollowsEducationFormatter ?, TwitterRewards.TweetCardView, UIView, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$s14TwitterUISwift27StandardStatusEducationViewCMn ?, _$sSo11UIStackViewC, _$sSo15CAGradientLayerCSg, __C.CGSize ?;

@interface TwitterRewards.ExclusiveContentView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat width;
    nominal type descriptor for CoreGraphics.CGFloat ? $__lazy_storage_$_height;
    __C.CGSize ? $__lazy_storage_$_size;
    __C.CAGradientLayer? $__lazy_storage_$_gradientLayer;
    TwitterRewards.PlaceholderTextArea placeholderTextArea;
    nominal type descriptor for CoreGraphics.CGFloat tweetViewWidth;
    TwitterRewards.TweetCardView tweetView;
    TwitterRewards.SuperFollowsEducationFormatter ? $__lazy_storage_$_educationFormatter;
    nominal type descriptor for TwitterUISwift.StandardStatusEducationView ? $__lazy_storage_$_educationView;
    __C.UIStackView tweetActionView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14TwitterRewards20ExclusiveContentView_h */
