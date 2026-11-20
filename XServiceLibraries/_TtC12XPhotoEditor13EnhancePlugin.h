//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor13EnhancePlugin_h
#define _TtC12XPhotoEditor13EnhancePlugin_h
@import Foundation;

@class XPhotoEditor.EditorPluginDelegate ?, XPhotoEditor.EditorToolOption, XPhotoEditor.EditorToolbarButton ?, XPhotoEditor.EditorToolbarItem, XPhotoEditor.EnhancePluginData ?, XPhotoEditor.EnhanceSelectionView ?, _$sSo6UIViewCSg, _TtCs12_SwiftObject;

@interface XPhotoEditor.EnhancePlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.UIView? $__lazy_storage_$_selectionView;
    XPhotoEditor.EnhanceSelectionView ? $__lazy_storage_$_enhanceSelectionView;
    XPhotoEditor.EditorToolOption tool;
    XPhotoEditor.EditorPluginDelegate ? delegate;
    XPhotoEditor.EditorToolbarItem toolbarItem;
    XPhotoEditor.EditorToolbarButton ? $__lazy_storage_$_closeButton;
    XPhotoEditor.EnhancePluginData ? dataOnActivation;
}

@end

#endif /* _TtC12XPhotoEditor13EnhancePlugin_h */
