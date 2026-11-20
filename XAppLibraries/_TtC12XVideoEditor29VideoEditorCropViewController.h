//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor29VideoEditorCropViewController_h
#define _TtC12XVideoEditor29VideoEditorCropViewController_h
@import Foundation;

@class UIViewController, XVideoEditor.VideoEditorActionToolbarView XVideoEditor.VideoEditorCropAction ?, XVideoEditor.VideoEditorCropViewModel, XVideoEditor.VideoEditorTabID, XVideoEditor.VideoEditorToolBarItemViewModel ?, _$s7Combine14AnyCancellableCMn ?, _$sSo8UIButtonCSg;

@interface XVideoEditor.VideoEditorCropViewController : UIViewController { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorCropViewModel _viewModel;
    nominal type descriptor for Combine.AnyCancellable ? _actionHandlerCancellable;
    nominal type descriptor for Combine.AnyCancellable ? _selectedActionCancellable;
    nominal type descriptor for Combine.AnyCancellable ? _resetAvailabilityCancellable;
    __C.UIButton? $__lazy_storage_$__resetButton;
    XVideoEditor.VideoEditorActionToolbarView XVideoEditor.VideoEditorCropAction ? $__lazy_storage_$__toolbar;
    XVideoEditor.VideoEditorTabID editorTabID;
    XVideoEditor.VideoEditorToolBarItemViewModel ? toolbarItem;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XVideoEditor29VideoEditorCropViewController_h */
