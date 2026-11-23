//
#ifndef _TtC20ChatAttachmentViewer34AttachmentViewerModalSlideAnimator_h
#define _TtC20ChatAttachmentViewer34AttachmentViewerModalSlideAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, Swift.Bool;

@interface ChatAttachmentViewer.AttachmentViewerModalSlideAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    Swift.Bool isPresenting;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)init;

@end

#endif /* _TtC20ChatAttachmentViewer34AttachmentViewerModalSlideAnimator_h */
