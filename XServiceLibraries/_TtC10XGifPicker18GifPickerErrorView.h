//
#ifndef _TtC10XGifPicker18GifPickerErrorView_h
#define _TtC10XGifPicker18GifPickerErrorView_h
@import Foundation;

@class UIView, _$sSo11UIStackViewC, _$sSo7UILabelC, _$sSo8UIButtonC, _$syyc;

@interface XGifPicker.GifPickerErrorView : UIView { // (Swift)
    /* instance variables */
    () -> () onRetry;
    __C.UIButton retryButton;
    __C.UIStackView stackView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10XGifPicker18GifPickerErrorView_h */
