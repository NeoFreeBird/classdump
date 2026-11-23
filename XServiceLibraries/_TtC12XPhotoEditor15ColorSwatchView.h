//
#ifndef _TtC12XPhotoEditor15ColorSwatchView_h
#define _TtC12XPhotoEditor15ColorSwatchView_h
@import Foundation;

@class UIView, _$sSo15CAGradientLayerC, _$sSo7CALayerC;

@interface XPhotoEditor.ColorSwatchView : UIView { // (Swift)
    /* instance variables */
    __C.CALayer wheelLayer;
    __C.CAGradientLayer hueLayer;
    __C.CAGradientLayer saturationLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XPhotoEditor15ColorSwatchView_h */
