//
#ifndef _TtC12XVideoEditor33VideoEditorClipFilmstripViewModel_h
#define _TtC12XVideoEditor33VideoEditorClipFilmstripViewModel_h
@import Foundation;

@class XVideoEditor.VideoEditorClipFilmstripViewConfig ?, XVideoEditor.VideoEditorFrameGenerator, XVideoEditor.VideoEditorSession, _$s7Combine9PublishedVMn XVideoEditor.VideoEditorBoundedSlider.PlayheadStyle, _$s7Combine9PublishedVMn XVideoEditor.VideoEditorClipFilmstripViewType, _$s7Combine9PublishedVMn __C.CMTime, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorClipFilmstripViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorSession _editorSession;
    XVideoEditor.VideoEditorFrameGenerator _frameGenerator;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    XVideoEditor.VideoEditorClipFilmstripViewConfig ? config;
    nominal type descriptor for Combine.Published __C.CMTime _appliedTrimmedDuration;
    nominal type descriptor for Combine.Published XVideoEditor.VideoEditorClipFilmstripViewType _type;
    nominal type descriptor for Combine.Published XVideoEditor.VideoEditorBoundedSlider.PlayheadStyle _playheadStyle;
}

@end

#endif /* _TtC12XVideoEditor33VideoEditorClipFilmstripViewModel_h */
