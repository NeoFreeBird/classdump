//
#ifndef _TtC20ChatAttachmentViewer37AttachmentViewerTransitioningDelegate_h
#define _TtC20ChatAttachmentViewer37AttachmentViewerTransitioningDelegate_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class ChatAttachmentViewer.AttachmentViewerSourceProviding ?, ChatAttachmentViewer.AttachmentViewerZoomAnimator, NSObject;

@interface ChatAttachmentViewer.AttachmentViewerTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> { // (Swift)
    /* instance variables */
    ChatAttachmentViewer.AttachmentViewerSourceProviding ? sourceProvider;
    ChatAttachmentViewer.AttachmentViewerZoomAnimator zoomAnimator;
}

/* instance methods */
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)interactionControllerForPresentation:(id)presentation;
- (id)interactionControllerForDismissal:(id)dismissal;
- (id)init;

@end

#endif /* _TtC20ChatAttachmentViewer37AttachmentViewerTransitioningDelegate_h */
