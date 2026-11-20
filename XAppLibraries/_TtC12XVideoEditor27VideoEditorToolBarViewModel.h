//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor27VideoEditorToolBarViewModel_h
#define _TtC12XVideoEditor27VideoEditorToolBarViewModel_h
@import Foundation;

@class XVideoEditor.VideoEditorCaptionsViewModel, XVideoEditor.VideoEditorExportViewModel, XVideoEditor.VideoEditorSession, XVideoEditor.VideoEditorTabID, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn XVideoEditor.VideoEditorTabID _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySo7UIImageCSg _$ss5NeverOMn, _$sSD -> XVideoEditor.VideoEditorTabID XVideoEditor.VideoEditorToolBarItemViewModel, _$sSa -> XVideoEditor.VideoEditorToolBarItemViewModelProtocol, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorToolBarViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorSession _editorSession;
    XVideoEditor.VideoEditorCaptionsViewModel _captionsViewModel;
    XVideoEditor.VideoEditorExportViewModel _exportViewModel;
    XVideoEditor.VideoEditorTabID _rootToolbarItemID;
    nominal type descriptor for Combine.CurrentValueSubject XVideoEditor.VideoEditorTabID nominal type descriptor for Swift.Never _selectedItemSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list __C.UIImage? nominal type descriptor for Swift.Never _coverThumbnailSubject;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never didClosePublisher;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never didTapSettingsPublisher;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never didTapGenerateCaptionsPublisher;
    Swift.Dictionary -> XVideoEditor.VideoEditorTabID XVideoEditor.VideoEditorToolBarItemViewModel toolbarItemByID;
    Swift.Array -> XVideoEditor.VideoEditorToolBarItemViewModelProtocol toolbarItems;
}

@end

#endif /* _TtC12XVideoEditor27VideoEditorToolBarViewModel_h */
