//
#ifndef _TtC12XVideoEditor33VideoEditorCaptionsViewController_h
#define _TtC12XVideoEditor33VideoEditorCaptionsViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XVideoEditor.VideoEditorActionToolbarView XVideoEditor.VideoEditorCaptionsToolbarAction ?, XVideoEditor.VideoEditorCaptionsEditViewModel, XVideoEditor.VideoEditorCaptionsFontSelector ?, XVideoEditor.VideoEditorCaptionsGenerateButton, XVideoEditor.VideoEditorCaptionsTextFaceSelector, XVideoEditor.VideoEditorCaptionsViewModel, XVideoEditor.VideoEditorTabID, XVideoEditor.VideoEditorToolBarItemViewModel ?, _$s12XPhotoEditor28MediaStyleTrayViewControllerCMn ?, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn XVideoEditor.VideoEditorRelayoutRequest _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface XVideoEditor.VideoEditorCaptionsViewController : UIViewController { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorCaptionsViewModel _viewModel;
    XVideoEditor.VideoEditorCaptionsEditViewModel _editViewModel;
    XVideoEditor.VideoEditorCaptionsGenerateButton _generateCaptionsButton;
    XVideoEditor.VideoEditorActionToolbarView XVideoEditor.VideoEditorCaptionsToolbarAction ? _toolbar;
    XVideoEditor.VideoEditorCaptionsFontSelector ? _fontSelector;
    XVideoEditor.VideoEditorCaptionsTextFaceSelector _textFaceSelector;
    nominal type descriptor for XPhotoEditor.MediaStyleTrayViewController ? _tray;
    Swift.Bool _areSelectorsVisible;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for Combine.AnyCancellable ? _actionHandlerCancellable;
    nominal type descriptor for Combine.PassthroughSubject XVideoEditor.VideoEditorRelayoutRequest nominal type descriptor for Swift.Never _needsRelayoutSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never _prepareRelayoutSubject;
    XVideoEditor.VideoEditorTabID editorTabID;
    XVideoEditor.VideoEditorToolBarItemViewModel ? toolbarItem;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewWillLayoutSubviews;
- (void)_didTapGenerateCaptions;
- (void)_keyboardWillChangeFrame:(id)frame;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XVideoEditor33VideoEditorCaptionsViewController_h */
