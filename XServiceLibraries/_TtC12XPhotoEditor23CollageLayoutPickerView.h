//
#ifndef _TtC12XPhotoEditor23CollageLayoutPickerView_h
#define _TtC12XPhotoEditor23CollageLayoutPickerView_h
@import Foundation;

@class UIView, XPhotoEditor.CollageLayout _$scSg ->, _$sSa -> XPhotoEditor.CollageLayout, _$sSa -> XPhotoEditor.CollageLayoutThumbView, _$sSo11UIStackViewC;

@interface XPhotoEditor.CollageLayoutPickerView : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.CollageLayout _$scSg -> onLayoutSelected;
    __C.UIStackView stackView;
    Swift.Array -> XPhotoEditor.CollageLayoutThumbView thumbViews;
    Swift.Array -> XPhotoEditor.CollageLayout layouts;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor23CollageLayoutPickerView_h */
