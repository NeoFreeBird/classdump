//
#ifndef _TtC7XSports32SportsGameHighlightsCarouselCell_h
#define _TtC7XSports32SportsGameHighlightsCarouselCell_h
@import Foundation;

@class UICollectionViewCell, XDiffableCollection.DiffableView, XSports.SportsGameHighlightsCarouselCell.Content ?, XSports.SportsHorizontalEdgeFade, XSports.SportsImageLoader ?, XSports.SportsInlineVideoSession _$sSgSS_So6UIViewCSo12UIScrollViewCtcSg, _$s12CoreGraphics7CGFloatVMn ?, _$sSo11UIImageViewC, _$sSo12UIScrollViewCycSg, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$sySScSg;

@interface XSports.SportsGameHighlightsCarouselCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    ((Swift.String) -> ())? onReplay;
    XSports.SportsInlineVideoSession _$sSgSS_So6UIViewCSo12UIScrollViewCtcSg installPlayVideo;
    (() -> __C.UIScrollView)? autoplayScrollView;
    __C.UIImageView logoImageView;
    XSports.SportsImageLoader ? $__lazy_storage_$_logoLoader;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UIView carouselContainer;
    XDiffableCollection.DiffableView diffableView;
    XSports.SportsHorizontalEdgeFade edgeFade;
    XSports.SportsGameHighlightsCarouselCell.Content ? content;
    nominal type descriptor for CoreGraphics.CGFloat ? renderedCardWidth;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports32SportsGameHighlightsCarouselCell_h */
