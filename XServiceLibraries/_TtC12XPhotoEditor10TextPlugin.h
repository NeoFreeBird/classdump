//
#ifndef _TtC12XPhotoEditor10TextPlugin_h
#define _TtC12XPhotoEditor10TextPlugin_h
@import Foundation;

@class Swift.Bool, XPhotoEditor.EditorPluginDelegate ?, XPhotoEditor.EditorToolOption, XPhotoEditor.EditorToolbarItem, XPhotoEditor.TextCanvasView, XPhotoEditor.TextColoringButton, XPhotoEditor.TextFontStylePicker, XPhotoEditor.TextPlugin.EditingSnapshot ?, XPhotoEditor.TextStyleTrayViewController ??, XPhotoEditor.VerticalColorPicker, _$sSh -> _$s10Foundation4UUIDVMn, _TtCs12_SwiftObject;

@interface XPhotoEditor.TextPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPhotoEditor.TextCanvasView textCanvas;
    XPhotoEditor.VerticalColorPicker colorPicker;
    XPhotoEditor.TextColoringButton coloringButton;
    XPhotoEditor.TextFontStylePicker fontStylePicker;
    Swift.Bool isTextInputTrayEnabled;
    XPhotoEditor.TextStyleTrayViewController ?? $__lazy_storage_$_styleTray;
    XPhotoEditor.TextPlugin.EditingSnapshot ? editingSnapshot;
    Swift.Set -> nominal type descriptor for Foundation.UUID pendingAddTextIds;
    XPhotoEditor.EditorToolOption tool;
    XPhotoEditor.EditorPluginDelegate ? delegate;
    XPhotoEditor.EditorToolbarItem toolbarItem;
}

@end

#endif /* _TtC12XPhotoEditor10TextPlugin_h */
