//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor28MediaStyleTrayColorWheelView_h
#define _TtC12XPhotoEditor28MediaStyleTrayColorWheelView_h
@import Foundation;

@class UIView, _$sSo15CAGradientLayerC;

@interface XPhotoEditor.MediaStyleTrayColorWheelView : UIView { // (Swift)
    /* instance variables */
    __C.CAGradientLayer _gradientLayer;
    __C.CAGradientLayer _highlightLayer;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC12XPhotoEditor28MediaStyleTrayColorWheelView_h */
