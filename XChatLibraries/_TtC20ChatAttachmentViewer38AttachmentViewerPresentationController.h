//
#ifndef _TtC20ChatAttachmentViewer38AttachmentViewerPresentationController_h
#define _TtC20ChatAttachmentViewer38AttachmentViewerPresentationController_h
@import Foundation;

@class UIPresentationController;

@interface ChatAttachmentViewer.AttachmentViewerPresentationController : UIPresentationController // (Swift)

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfPresentedViewInContainerView;

/* instance methods */
- (void)containerViewWillLayoutSubviews;
- (id)initWithPresentedViewController:(id)controller presentingViewController:(id)controller;

@end

#endif /* _TtC20ChatAttachmentViewer38AttachmentViewerPresentationController_h */
