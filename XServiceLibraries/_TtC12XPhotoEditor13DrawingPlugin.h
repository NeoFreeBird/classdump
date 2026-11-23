//
#ifndef _TtC12XPhotoEditor13DrawingPlugin_h
#define _TtC12XPhotoEditor13DrawingPlugin_h
@import Foundation;

@class XPhotoEditor.BrushMode, XPhotoEditor.DrawingCanvasView, XPhotoEditor.EditorColorSelection, XPhotoEditor.EditorPluginDelegate ?, XPhotoEditor.EditorToolOption, XPhotoEditor.EditorToolbarButton ?, XPhotoEditor.EditorToolbarItem, XPhotoEditor.VerticalColorPicker, _$s9PencilKit9PKDrawingVMn ?, _$sSD -> XPhotoEditor.BrushMode _$s12CoreGraphics7CGFloatVMn, _$sSa -> XPhotoEditor.DrawingPluginData, _$sSiSg, _$sSo6UIViewC, _TtCs12_SwiftObject;

@interface XPhotoEditor.DrawingPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPhotoEditor.DrawingCanvasView canvas;
    XPhotoEditor.VerticalColorPicker colorPicker;
    XPhotoEditor.EditorToolbarButton ? $__lazy_storage_$_eraserToolbarButton;
    XPhotoEditor.BrushMode currentMode;
    XPhotoEditor.EditorColorSelection colorSelection;
    Swift.Dictionary -> XPhotoEditor.BrushMode nominal type descriptor for CoreGraphics.CGFloat widths;
    Swift.Array -> XPhotoEditor.DrawingPluginData undoHistory;
    Swift.Int? undoHistoryCheckpointIndex;
    nominal type descriptor for PencilKit.PKDrawing ? lastRestoredDrawing;
    __C.UIView brushPreviewView;
    XPhotoEditor.EditorToolOption tool;
    XPhotoEditor.EditorToolbarItem toolbarItem;
    XPhotoEditor.EditorPluginDelegate ? delegate;
}

@end

#endif /* _TtC12XPhotoEditor13DrawingPlugin_h */
