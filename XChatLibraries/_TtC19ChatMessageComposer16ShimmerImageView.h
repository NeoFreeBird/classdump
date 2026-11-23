//
#ifndef _TtC19ChatMessageComposer16ShimmerImageView_h
#define _TtC19ChatMessageComposer16ShimmerImageView_h
@import Foundation;

@class Swift.Bool, UIImage, UIImageView, _$s13XDesignSystem22ShimmerPlaceholderViewCMn, _$sSo7UIImageCSg;

@interface ChatMessageComposer.ShimmerImageView : UIImageView { // (Swift)
    /* instance variables */
    Swift.Bool isShimmerEnabled;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView shimmerView;
    __C.UIImage? savedImage;
}

@property (nonatomic, retain) UIImage *image;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;

@end

#endif /* _TtC19ChatMessageComposer16ShimmerImageView_h */
