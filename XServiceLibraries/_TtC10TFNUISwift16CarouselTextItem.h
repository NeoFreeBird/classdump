//
#ifndef _TtC10TFNUISwift16CarouselTextItem_h
#define _TtC10TFNUISwift16CarouselTextItem_h
@import Foundation;

@class TFNUISwift.CarouselTextItem.Configuration, UIView, _$sSo7CALayerC, _$sSo7UILabelC;

@interface TFNUISwift.CarouselTextItem : UIView { // (Swift)
    /* instance variables */
    __C.UILabel baseLabel;
    __C.UILabel highlightLabel;
    __C.CALayer highlightMask;
    TFNUISwift.CarouselTextItem.Configuration configuration;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10TFNUISwift16CarouselTextItem_h */
