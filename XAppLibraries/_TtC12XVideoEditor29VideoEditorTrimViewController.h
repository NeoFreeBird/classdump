//
#ifndef _TtC12XVideoEditor29VideoEditorTrimViewController_h
#define _TtC12XVideoEditor29VideoEditorTrimViewController_h
@import Foundation;

@class UIViewController, XVideoEditor.VideoEditorTabID, XVideoEditor.VideoEditorToolBarItemViewModel ?, XVideoEditor.VideoEditorTrimViewModel, _$s7Combine14AnyCancellableCMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface XVideoEditor.VideoEditorTrimViewController : UIViewController { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorTrimViewModel _viewModel;
    nominal type descriptor for Combine.AnyCancellable ? _actionHandlerCancellable;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    XVideoEditor.VideoEditorTabID editorTabID;
    XVideoEditor.VideoEditorToolBarItemViewModel ? toolbarItem;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XVideoEditor29VideoEditorTrimViewController_h */
