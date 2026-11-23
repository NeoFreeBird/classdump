//
#ifndef _TtC12XPhotoEditor22CanvasToolControlsView_h
#define _TtC12XPhotoEditor22CanvasToolControlsView_h
@import Foundation;

@class UIView, _$sSa -> XPhotoEditor.CanvasToolColumnElement _$s_So6UIViewCXc;

@interface XPhotoEditor.CanvasToolControlsView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> XPhotoEditor.CanvasToolColumnElement _$s_So6UIViewCXc leftElements;
    Swift.Array -> XPhotoEditor.CanvasToolColumnElement _$s_So6UIViewCXc rightElements;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor22CanvasToolControlsView_h */
