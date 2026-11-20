//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor36VideoEditorStyleTrayCaptionsEditPane_h
#define _TtC12XVideoEditor36VideoEditorStyleTrayCaptionsEditPane_h
@import Foundation;

@class UIView, _$sSa -> XVideoEditor.VideoEditorCaptionsToolbarAction, _$sSa -> _$s13XDesignSystem6ButtonCMn, _$sSo6UIViewCSg;

@interface XVideoEditor.VideoEditorStyleTrayCaptionsEditPane : UIView { // (Swift)
    /* instance variables */
    __C.UIView? contentView;
    Swift.Array -> XVideoEditor.VideoEditorCaptionsToolbarAction _actions;
    Swift.Array -> nominal type descriptor for XDesignSystem.Button _buttons;
    XVideoEditor.VideoEditorCaptionsToolbarAction function type (escaping) _onAction;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)_didTapActionButton:(id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor36VideoEditorStyleTrayCaptionsEditPane_h */
