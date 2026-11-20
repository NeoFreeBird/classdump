//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor40VideoEditorCaptionsFontSelectorViewModel_h
#define _TtC12XVideoEditor40VideoEditorCaptionsFontSelectorViewModel_h
@import Foundation;

@class XVideoEditor.VideoEditorCaptionsFontSelectorViewModel.Target, XVideoEditor.VideoEditorSession, _$s7Combine9PublishedVMn _$sSi, _$sSa -> XVideoEditor.VideoEditorCaptionFont, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorCaptionsFontSelectorViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorSession _editorSession;
    XVideoEditor.VideoEditorCaptionsFontSelectorViewModel.Target _target;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    Swift.Array -> XVideoEditor.VideoEditorCaptionFont captionFonts;
    nominal type descriptor for Combine.Published Swift.Int _selectedFontIndex;
}

@end

#endif /* _TtC12XVideoEditor40VideoEditorCaptionsFontSelectorViewModel_h */
