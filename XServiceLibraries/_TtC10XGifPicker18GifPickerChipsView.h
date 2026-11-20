//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XGifPicker18GifPickerChipsView_h
#define _TtC10XGifPicker18GifPickerChipsView_h
@import Foundation;

@class UICollectionReusableView, XGifPicker.GifPickerChip _$scSg ->, XGifPicker.GifPickerChipsScrollView, XGifPicker.GifPickerChipsState, _$sSa -> XDesignSystem.Button, _$sSo11UIStackViewC;

@interface XGifPicker.GifPickerChipsView : UICollectionReusableView { // (Swift)
    /* instance variables */
    XGifPicker.GifPickerChip _$scSg -> onSelect;
    Swift.Array -> XDesignSystem.Button buttons;
    XGifPicker.GifPickerChipsState state;
    XGifPicker.GifPickerChipsScrollView scrollView;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10XGifPicker18GifPickerChipsView_h */
