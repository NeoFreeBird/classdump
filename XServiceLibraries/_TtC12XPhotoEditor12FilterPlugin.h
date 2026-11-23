//
#ifndef _TtC12XPhotoEditor12FilterPlugin_h
#define _TtC12XPhotoEditor12FilterPlugin_h
@import Foundation;

@class XPhotoEditor.EditorPluginDelegate ?, XPhotoEditor.EditorToolOption, XPhotoEditor.EditorToolbarItem, XPhotoEditor.FilterLibrary, XPhotoEditor.FilterSelectionView ?, _$sSa -> XPhotoEditor.FilterDefinition ?, _$sSh -> XPhotoEditor.FilterId, _$sSo6UIViewCSg, _$sSo7UIImageCSg, _TtCs12_SwiftObject;

@interface XPhotoEditor.FilterPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.UIView? $__lazy_storage_$_selectionView;
    XPhotoEditor.FilterSelectionView ? $__lazy_storage_$_filterSelectionView;
    Swift.Set -> XPhotoEditor.FilterId uniqueFiltersSeen;
    XPhotoEditor.FilterLibrary library;
    Swift.Array -> XPhotoEditor.FilterDefinition ? $__lazy_storage_$_filterItems;
    __C.UIImage? filterSourceImage;
    XPhotoEditor.EditorToolOption tool;
    XPhotoEditor.EditorPluginDelegate ? delegate;
    XPhotoEditor.EditorToolbarItem toolbarItem;
}

@end

#endif /* _TtC12XPhotoEditor12FilterPlugin_h */
