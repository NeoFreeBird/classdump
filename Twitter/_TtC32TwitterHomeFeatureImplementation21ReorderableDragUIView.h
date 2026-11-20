//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation21ReorderableDragUIView_h
#define _TtC32TwitterHomeFeatureImplementation21ReorderableDragUIView_h
@import Foundation;

#include "UIDragInteractionDelegate-Protocol.h"

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewCSg, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo7CALayerCSg, _$sSo7UIImageCSg, _$syycSg, __C.CGPoint;

@interface TwitterHomeFeatureImplementation.ReorderableDragUIView : UIView <UIDragInteractionDelegate> { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    __C.UIView placeholderView;
    nominal type descriptor for CoreGraphics.CGFloat previewCornerRadius;
    (() -> ())? onDragBegan;
    (() -> ())? onDragEnded;
    (() -> ())? onSwipeLeft;
    (() -> ())? onSwipeRight;
    __C.CALayer? highlightLayer;
    __C.UIImage? cleanSnapshotImage;
    __C.UIView? dragPreviewContainerView;
    __C.UIView? dragPreviewWrapperView;
    __C.UIImageView? dragPreviewImageView;
    __C.CGPoint dragCenterOffset;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)handleSwipe:(id)swipe;
- (id)dragInteraction:(id)interaction itemsForBeginningSession:(id)session;
- (id)dragInteraction:(id)interaction previewForLiftingItem:(id)item session:(id)session;
- (void)dragInteraction:(id)interaction willAnimateLiftWithAnimator:(id)animator session:(id)session;
- (_Bool)dragInteraction:(id)interaction prefersFullSizePreviewsForSession:(id)session;
- (void)dragInteraction:(id)interaction sessionDidMove:(id)move;
- (id)dragInteraction:(id)interaction previewForCancellingItem:(id)item withDefault:(id)_default;
- (void)dragInteraction:(id)interaction item:(id)item willAnimateCancelWithAnimator:(id)animator;
- (void)dragInteraction:(id)interaction session:(id)session willEndWithOperation:(unsigned long long)operation;
- (_Bool)dragInteraction:(id)interaction sessionIsRestrictedToDraggingApplication:(id)application;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation21ReorderableDragUIView_h */
