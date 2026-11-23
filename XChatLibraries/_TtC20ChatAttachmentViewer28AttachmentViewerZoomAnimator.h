//
#ifndef _TtC20ChatAttachmentViewer28AttachmentViewerZoomAnimator_h
#define _TtC20ChatAttachmentViewer28AttachmentViewerZoomAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerInteractiveTransitioning-Protocol.h"

@class ChatAttachmentViewer.AttachmentViewerSourceProviding ?, ChatAttachmentViewer.AttachmentViewerZoomable ?, ChatAttachmentViewer.ZoomMorphCornerMaskDriver ?, NSObject, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSi, _$sSo22UIViewPropertyAnimatorCSg, _$sSo36UIViewControllerContextTransitioning_pSg, _$sSo6UIViewCSg, __C.CACornerMask, __C.CGRect, __C.CGRect ?;

@interface ChatAttachmentViewer.AttachmentViewerZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> { // (Swift)
    /* instance variables */
    Swift.Bool isPresenting;
    Swift.Bool isInterruptible;
    Swift.Bool isInteracting;
    ChatAttachmentViewer.AttachmentViewerSourceProviding ? sourceProvider;
    __C.UIViewControllerContextTransitioning? transitionContext;
    ChatAttachmentViewer.AttachmentViewerZoomable ? viewer;
    __C.UIView? snapshot;
    [__C.UIView] forwardOverlays;
    ChatAttachmentViewer.ZoomMorphCornerMaskDriver ? cornerMaskDriver;
    __C.UIViewPropertyAnimator? propertyAnimator;
    Swift.Int index;
    __C.CGRect fullFrame;
    __C.CGRect ? sourceFrame;
    nominal type descriptor for CoreGraphics.CGFloat sourceCornerRadius;
    __C.CACornerMask sourceMaskedCorners;
    nominal type descriptor for CoreGraphics.CGFloat viewerCornerRadius;
    __C.CGRect dragBaseFrame;
    nominal type descriptor for CoreGraphics.CGFloat baseBackdropAlpha;
    nominal type descriptor for CoreGraphics.CGFloat baseChromeAlpha;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (void)startInteractiveTransition:(id)transition;
- (id)init;

@end

#endif /* _TtC20ChatAttachmentViewer28AttachmentViewerZoomAnimator_h */
