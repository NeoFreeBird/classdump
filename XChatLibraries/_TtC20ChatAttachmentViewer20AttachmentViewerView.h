//
#ifndef _TtC20ChatAttachmentViewer20AttachmentViewerView_h
#define _TtC20ChatAttachmentViewer20AttachmentViewerView_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentViewerTopBarView ?, ChatAttachmentViewer.AttachmentViewerViewDelegate ?, ChatAttachmentViewer.PassthroughView, ChatAttachmentViewer.VideoControlsView, Swift.Bool, UIView, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo6UIViewCSgXw;

@interface ChatAttachmentViewer.AttachmentViewerView : UIView { // (Swift)
    /* instance variables */
    ChatAttachmentViewer.AttachmentViewerViewDelegate ? delegate;
    __C.UIView pagingContainerView;
    __C.UIView backdrop;
    ChatAttachmentViewer.PassthroughView chrome;
    ChatAttachmentViewer.AttachmentViewerTopBarView ? $__lazy_storage_$_topBar;
    ChatAttachmentViewer.VideoControlsView videoControls;
    __C.UIView composerDimView;
    __C.NSLayoutConstraint? videoControlsBottomConstraint;
    weak __C.UIView? composerView;
    nominal type descriptor for Foundation.NSKeyValueObservation ? composerBoundsObservation;
    nominal type descriptor for CoreGraphics.CGFloat lastRestingComposerHeight;
    Swift.Bool isComposerHidden;
    Swift.Bool showsForward;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)handleDimTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC20ChatAttachmentViewer20AttachmentViewerView_h */
