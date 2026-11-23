//
#ifndef _TtC12XPhotoEditor19TextFontStylePicker_h
#define _TtC12XPhotoEditor19TextFontStylePicker_h
@import Foundation;

@class UIView, XPhotoEditor.TextFontStyle _$scSg ->, _$sSa -> XPhotoEditor.FontStyleButton;

@interface XPhotoEditor.TextFontStylePicker : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.TextFontStyle _$scSg -> onSelect;
    Swift.Array -> XPhotoEditor.FontStyleButton buttons;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)buttonTapped:(id)tapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor19TextFontStylePicker_h */
