//
#ifndef _TtC19ChatMessageComposer12ShimmerLabel_h
#define _TtC19ChatMessageComposer12ShimmerLabel_h
@import Foundation;

@class NSString, Swift.Bool, UIColor, UILabel, _$s13XDesignSystem22ShimmerPlaceholderViewCMn, _$sSS, _$sSSSg, _$sSo7UIColorCSg;

@interface ChatMessageComposer.ShimmerLabel : UILabel { // (Swift)
    /* instance variables */
    Swift.Bool isShimmerEnabled;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView shimmerView;
    Swift.String shimmerPlaceholder;
    Swift.String? savedText;
    __C.UIColor? savedTextColor;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer12ShimmerLabel_h */
