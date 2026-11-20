//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor17EditorPluginStore_h
#define _TtC12XPhotoEditor17EditorPluginStore_h
@import Foundation;

@class XPhotoEditor.EditorPlugin _$scSg ->, _$sSa -> XPhotoEditor.EditorPlugin, _$sSa -> XPhotoEditor.EditorPlugin _$s_p6plugin_ XPhotoEditor.EditorToolbarButton buttont, _$syycSg, _TtCs12_SwiftObject;

@interface XPhotoEditor.EditorPluginStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XPhotoEditor.EditorPlugin plugins;
    Swift.Array -> XPhotoEditor.EditorPlugin _$s_p6plugin_ XPhotoEditor.EditorToolbarButton buttont pluginToolbarButtons;
    XPhotoEditor.EditorPlugin _$scSg -> onPluginSelected;
    (() -> ())? onToolbarButtonsChanged;
}

@end

#endif /* _TtC12XPhotoEditor17EditorPluginStore_h */
