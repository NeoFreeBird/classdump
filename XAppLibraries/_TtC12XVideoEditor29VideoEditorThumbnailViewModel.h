//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor29VideoEditorThumbnailViewModel_h
#define _TtC12XVideoEditor29VideoEditorThumbnailViewModel_h
@import Foundation;

@class XVideoEditor.VideoEditorFrameGenerator, XVideoEditor.VideoEditorSession, XVideoEditor.VideoEditorThumbnailViewModel.CustomPreviewSource ?, _$s7Combine19CurrentValueSubjectCMn XVideoEditor.VideoEditorThumbnailViewModel.State _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo13TTMAssetImageCSg, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorThumbnailViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorSession _editorSession;
    XVideoEditor.VideoEditorFrameGenerator _frameGenerator;
    nominal type descriptor for Combine.CurrentValueSubject XVideoEditor.VideoEditorThumbnailViewModel.State nominal type descriptor for Swift.Never _state;
    __C.TTMAssetImage? _trackingCustomPreview;
    XVideoEditor.VideoEditorThumbnailViewModel.CustomPreviewSource ? _customPreviewSource;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _selectFrameTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _rerenderTask;
}

@end

#endif /* _TtC12XVideoEditor29VideoEditorThumbnailViewModel_h */
