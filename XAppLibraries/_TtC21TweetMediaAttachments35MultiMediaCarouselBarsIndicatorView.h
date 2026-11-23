//
#ifndef _TtC21TweetMediaAttachments35MultiMediaCarouselBarsIndicatorView_h
#define _TtC21TweetMediaAttachments35MultiMediaCarouselBarsIndicatorView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo7CALayerCG, _$sSi;

@interface TweetMediaAttachments.MultiMediaCarouselBarsIndicatorView : UIView { // (Swift)
    /* instance variables */
    [__C.CALayer] barLayers;
}

@property (nonatomic) long long pageCount;
@property (nonatomic) double progress;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (double)standardHeight;
+ (struct CGSize { double x0; double x1; })standardSizeForPageCount:(long long)count;

/* instance methods */
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC21TweetMediaAttachments35MultiMediaCarouselBarsIndicatorView_h */
