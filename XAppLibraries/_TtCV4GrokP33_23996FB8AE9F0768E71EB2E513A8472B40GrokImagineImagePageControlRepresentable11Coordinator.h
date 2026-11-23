//
#ifndef _TtCV4GrokP33_23996FB8AE9F0768E71EB2E513A8472B40GrokImagineImagePageControlRepresentable11Coordinator_h
#define _TtCV4GrokP33_23996FB8AE9F0768E71EB2E513A8472B40GrokImagineImagePageControlRepresentable11Coordinator_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSObject;

@interface Grok.(GrokImagineImagePageControlRepresentable in _23996FB8AE9F0768E71EB2E513A8472B).Coordinator : NSObject <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 scrollView;
    @40@0:8:16@24@32 posts;
    @40@0:8:16@24@32 onSelectionChanged;
    @40@0:8:16@24@32 onTappedButSelectionNotChanged;
    @40@0:8:16@24@32 isUserInteracting;
    @40@0:8:16@24@32 lastExternalProgress;
    @40@0:8:16@24@32 pendingExternalProgress;
    @40@0:8:16@24@32 isUserDragging;
    @40@0:8:16@24@32 isDecelerating;
    @40@0:8:16@24@32 lastSelectedPostID;
    @40@0:8:16@24@32 feedbackGenerator;
    @40@0:8:16@24@32 appearTime;
    @40@0:8:16@24@32 animationSuppressDuration;
}

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (id)init;

@end

#endif /* _TtCV4GrokP33_23996FB8AE9F0768E71EB2E513A8472B40GrokImagineImagePageControlRepresentable11Coordinator_h */
