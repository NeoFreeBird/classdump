//
#ifndef _TtC12XVideoEditor29VideoEditorTextViewController_h
#define _TtC12XVideoEditor29VideoEditorTextViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class Swift.Bool, UIViewController, XVideoEditor.VideoEditorCaptionsFontSelector ?, XVideoEditor.VideoEditorCaptionsTextFaceSelector, XVideoEditor.VideoEditorCaptionsTextFaceSelectorViewModel.TrayFadeReason ?, XVideoEditor.VideoEditorTabID, XVideoEditor.VideoEditorTextViewController.EditingSession ?, XVideoEditor.VideoEditorTextViewController.TrayState, XVideoEditor.VideoEditorTextViewModel, XVideoEditor.VideoEditorToolBarItemViewModel ?, XVideoEditor.VideoOverlayTextViewContainer ?, _$s12XPhotoEditor28MediaStyleTrayViewControllerCMn ?, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn XVideoEditor.VideoEditorRelayoutRequest _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo20TFNCustomHitTestViewC, _$sSo22UITapGestureRecognizerC;

@interface XVideoEditor.VideoEditorTextViewController : UIViewController <UITextViewDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorTextViewModel _viewModel;
    XVideoEditor.VideoEditorCaptionsFontSelector ? _fontSelector;
    XVideoEditor.VideoEditorCaptionsTextFaceSelector _textFaceSelector;
    nominal type descriptor for XPhotoEditor.MediaStyleTrayViewController ? _tray;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for Combine.AnyCancellable ? _actionHandlerCancellable;
    nominal type descriptor for Combine.PassthroughSubject XVideoEditor.VideoEditorRelayoutRequest nominal type descriptor for Swift.Never _needsRelayoutSubject;
    Swift.Bool _hadText;
    XVideoEditor.VideoEditorTextViewController.EditingSession ? _editing;
    XVideoEditor.VideoEditorTextViewController.TrayState _trayState;
    XVideoEditor.VideoEditorCaptionsTextFaceSelectorViewModel.TrayFadeReason ? _trayFadeReason;
    Swift.Bool _areSelectorsEnabled;
    __C.UITapGestureRecognizer _backgroundTapGesture;
    __C.TFNCustomHitTestView _overlayCanvas;
    XVideoEditor.VideoOverlayTextViewContainer ? _overlayTextView;
    XVideoEditor.VideoEditorTabID editorTabID;
    XVideoEditor.VideoEditorToolBarItemViewModel ? toolbarItem;
}

/* instance methods */
- (void)textViewDidChange:(id)change;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (void)_didTapBackground:(id)background;
- (void)_keyboardWillChangeFrame:(id)frame;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XVideoEditor29VideoEditorTextViewController_h */
