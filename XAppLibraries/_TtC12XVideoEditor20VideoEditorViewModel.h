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
