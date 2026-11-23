//
#ifndef _TtC20ChatAttachmentViewer26AttachmentViewerTopBarView_h
#define _TtC20ChatAttachmentViewer26AttachmentViewerTopBarView_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentViewerTopBarViewDelegate ?, Swift.Bool, UIView, _$s8Dispatch0A8WorkItemCMn ?, _$sSo15UIBarButtonItemCSg, _$sSo15UINavigationBarC;

@interface ChatAttachmentViewer.AttachmentViewerTopBarView : UIView { // (Swift)
    /* instance variables */
    ChatAttachmentViewer.AttachmentViewerTopBarViewDelegate ? delegate;
    __C.UINavigationBar navigationBar;
    nominal type descriptor for Dispatch.DispatchWorkItem ? saveConfirmationWorkItem;
    __C.UIBarButtonItem? saveItem;
    Swift.Bool showsForward;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapClose;
- (void)didTapForward;
- (void)didTapSave;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC20ChatAttachmentViewer26AttachmentViewerTopBarView_h */
