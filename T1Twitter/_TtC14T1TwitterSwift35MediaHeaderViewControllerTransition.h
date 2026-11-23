//
#ifndef _TtC14T1TwitterSwift35MediaHeaderViewControllerTransition_h
#define _TtC14T1TwitterSwift35MediaHeaderViewControllerTransition_h
@import Foundation;

#include "TFNMediaTransitionDelegate-Protocol.h"
#include "_TtP14T1TwitterSwift36MediaContentViewControllerTransition_-Protocol.h"

@class NSObject, T1TwitterSwift.MediaContentContainerViewController ?, T1TwitterSwift.MediaHeaderViewModel, _$sSo16UIViewControllerCSg, _$sSo28TFNFullscreenMediaTransitionC, __C.CGRect ?;

@interface T1TwitterSwift.MediaHeaderViewControllerTransition : NSObject <T1TwitterSwift.MediaContentViewControllerTransition, TFNMediaTransitionDelegate> { // (Swift)
    /* instance variables */
    __C.UIViewController? sourceViewController;
    __C.CGRect ? cachedPresentingViewControllerFrameInWindow;
    T1TwitterSwift.MediaContentContainerViewController ? ownerViewController;
    __C.TFNFullscreenMediaTransition transition;
    T1TwitterSwift.MediaHeaderViewModel mediaHeaderViewModel;
}

/* instance methods */
- (void)mediaContentTransition;
- (id)forwardCardImageViewIn:(id)in;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewFrameInWindow:(id)window forObject:(id)object;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewHostViewFrameInWindow:(id)window forObject:(id)object;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift35MediaHeaderViewControllerTransition_h */
