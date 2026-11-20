//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor20VideoEditorViewModel_h
#define _TtC12XVideoEditor20VideoEditorViewModel_h
@import Foundation;

@class XVideoEditor.VideoEditorCaptionsViewModel, XVideoEditor.VideoEditorCropViewModel ?, XVideoEditor.VideoEditorPreviewViewModel ?, XVideoEditor.VideoEditorSession, XVideoEditor.VideoEditorTagViewModel ?, XVideoEditor.VideoEditorTextViewModel ?, XVideoEditor.VideoEditorThumbnailViewModel ?, XVideoEditor.VideoEditorToolBarViewModel, XVideoEditor.VideoEditorTrimViewModel ?, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorToolBarViewModel toolbarViewModel;
    XVideoEditor.VideoEditorSession _editorSession;
    XVideoEditor.VideoEditorPreviewViewModel ? _previewViewModel;
    XVideoEditor.VideoEditorTrimViewModel ? _trimViewModel;
    XVideoEditor.VideoEditorCaptionsViewModel _captionsViewModel;
    XVideoEditor.VideoEditorTextViewModel ? _textViewModel;
    XVideoEditor.VideoEditorCropViewModel ? _cropViewModel;
    XVideoEditor.VideoEditorThumbnailViewModel ? _thumbnailViewModel;
    XVideoEditor.VideoEditorTagViewModel ? _tagViewModel;
}

@end

#endif /* _TtC12XVideoEditor20VideoEditorViewModel_h */
