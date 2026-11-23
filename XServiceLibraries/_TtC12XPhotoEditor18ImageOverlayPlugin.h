//
#ifndef _TtC12XPhotoEditor18ImageOverlayPlugin_h
#define _TtC12XPhotoEditor18ImageOverlayPlugin_h
@import Foundation;

@class XPhotoEditor.EditorImagePicker ?, XPhotoEditor.EditorPluginDelegate ?, XPhotoEditor.EditorToolOption, XPhotoEditor.EditorToolbarItem, XPhotoEditor.ImageOverlayCanvasView, _TtCs12_SwiftObject;

@interface XPhotoEditor.ImageOverlayPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPhotoEditor.ImageOverlayCanvasView imageCanvas;
    XPhotoEditor.EditorImagePicker ? activePicker;
    XPhotoEditor.EditorToolOption tool;
    XPhotoEditor.EditorPluginDelegate ? delegate;
    XPhotoEditor.EditorToolbarItem toolbarItem;
}

@end

#endif /* _TtC12XPhotoEditor18ImageOverlayPlugin_h */
