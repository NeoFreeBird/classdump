//
#ifndef PTVFeaturedReasonView_h
#define PTVFeaturedReasonView_h
@import Foundation;

@class NSString, UIImageView, UILabel, UIView;

@interface PTVFeaturedReasonView : UIView {
    /* instance variables */
    UIImageView *_featuredBookmarkIcon;
    UILabel *_twoLineFeaturedReasonLabel;
    UILabel *_oneLineFeaturedReasonLabel;
    UILabel *_learnMoreFeaturedReasonLabel;
    _Bool _shouldTruncateFeaturedReason;
    NSString *_featuredColorHexString;
    NSString *_featuredReason;
}

/* class methods */
+ (double)CalculatedHeightForViewWithFeaturedReason:(id)reason SuperviewWidth:(double)width;
+ (_Bool)ShouldShowTruncatedFeaturedReasonWithSize:(struct CGSize { double x0; double x1; })size;
+ (double)TruncatedFeaturedReasonHeight;

/* instance methods */
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFeaturedColorHexString:(id)string;
- (void)setFeaturedReason:(id)reason;
- (void)figureOutIfShouldTruncateFeaturedReason;
- (void)alphaState;

@end

#endif /* PTVFeaturedReasonView_h */
