//
#ifndef _TtC12XVideoEditor32VideoEditorPreviewViewController_h
#define _TtC12XVideoEditor32VideoEditorPreviewViewController_h
@import Foundation;

@class UIViewController, XVideoEditor.VideoEditorPreviewViewModel, XVideoEditor.VideoEditorTabID, XVideoEditor.VideoEditorToolBarItemViewModel ?, _$s7Combine18PassthroughSubjectCMn XVideoEditor.VideoEditorRelayoutRequest _$ss5NeverOMn;

@interface XVideoEditor.VideoEditorPreviewViewController : UIViewController { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorPreviewViewModel _viewModel;
    nominal type descriptor for Combine.PassthroughSubject XVideoEditor.VideoEditorRelayoutRequest nominal type descriptor for Swift.Never _needsRelayoutSubject;
    XVideoEditor.VideoEditorTabID editorTabID;
    XVideoEditor.VideoEditorToolBarItemViewModel ? toolbarItem;
}

/* instance methods */
- (void)loadView;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XVideoEditor32VideoEditorPreviewViewController_h */
