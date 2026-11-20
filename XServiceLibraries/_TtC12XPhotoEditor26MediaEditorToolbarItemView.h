//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor26MediaEditorToolbarItemView_h
#define _TtC12XPhotoEditor26MediaEditorToolbarItemView_h
@import Foundation;

@class Swift.Bool, UIView, XPhotoEditor.EditorToolbarButton, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface XPhotoEditor.MediaEditorToolbarItemView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isEnabled;
    XPhotoEditor.EditorToolbarButton toolbarButton;
    __C.UILabel titleLabel;
    __C.UIImageView coverImageView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor26MediaEditorToolbarItemView_h */
