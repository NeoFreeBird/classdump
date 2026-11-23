//
#ifndef _TtC12XPhotoEditor19TextRedactionPlugin_h
#define _TtC12XPhotoEditor19TextRedactionPlugin_h
@import Foundation;

@class Swift.Bool, XPhotoEditor.EditorPluginDelegate ?, XPhotoEditor.EditorToolOption, XPhotoEditor.EditorToolbarItem, XPhotoEditor.RedactionToolMode, XPhotoEditor.TextDetectionService, XPhotoEditor.TextRedactionCanvasView, _$s10Foundation4UUIDVMn ?, _$sSa -> XPhotoEditor.DetectedWord, _$sSa -> XPhotoEditor.RedactionToolMode mode_ XPhotoEditor.EditorToolbarButton buttontGSg, _$sSiSg, _TtCs12_SwiftObject;

@interface XPhotoEditor.TextRedactionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPhotoEditor.TextRedactionCanvasView redactionCanvas;
    XPhotoEditor.TextDetectionService detectionService;
    Swift.Bool isDetecting;
    Swift.Int? lastScannedCheckpointIndex;
    XPhotoEditor.RedactionToolMode currentMode;
    nominal type descriptor for Foundation.UUID ? activeSelectionId;
    Swift.Array -> XPhotoEditor.DetectedWord detectedWords;
    Swift.Array -> XPhotoEditor.RedactionToolMode mode_ XPhotoEditor.EditorToolbarButton buttontGSg $__lazy_storage_$_modeToolbarButtons;
    XPhotoEditor.EditorToolOption tool;
    XPhotoEditor.EditorToolbarItem toolbarItem;
    XPhotoEditor.EditorPluginDelegate ? delegate;
}

@end

#endif /* _TtC12XPhotoEditor19TextRedactionPlugin_h */
