//
#ifndef _TtCO21TwitterUnifiedCardsUI7Posters11OverlayView_h
#define _TtCO21TwitterUnifiedCardsUI7Posters11OverlayView_h
@import Foundation;

@class TwitterUnifiedCards.PosterMetadata, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo15TFNGradientViewCSg, _$sSo7UIColorC, _$sSo7UILabelCSg;

@interface TwitterUnifiedCardsUI.Posters.OverlayView : UIView { // (Swift)
    /* instance variables */
    __C.UIColor gradientColor;
    __C.UIColor captionTextColor;
    __C.TFNGradientView? $__lazy_storage_$_gradientView;
    nominal type descriptor for CoreGraphics.CGFloat captionSideMargin;
    nominal type descriptor for CoreGraphics.CGFloat captionFontSize;
    __C.UILabel? $__lazy_storage_$_captionLabel;
    TwitterUnifiedCards.PosterMetadata posterMetadata;
}

/* instance methods */
- (id)initWithPosterMetadata:(id)metadata;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI7Posters11OverlayView_h */
