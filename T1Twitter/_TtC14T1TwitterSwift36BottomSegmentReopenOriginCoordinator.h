//
#ifndef _TtC14T1TwitterSwift36BottomSegmentReopenOriginCoordinator_h
#define _TtC14T1TwitterSwift36BottomSegmentReopenOriginCoordinator_h
@import Foundation;

#include "T1ImmersiveMediaOriginCoordinating-Protocol.h"

@class NSObject, _$sSo34T1ImmersiveMediaOriginCoordinating_pSg, _$sSo6UIViewCSgyc;

@interface T1TwitterSwift.BottomSegmentReopenOriginCoordinator : NSObject <T1ImmersiveMediaOriginCoordinating> { // (Swift)
    /* instance variables */
    () -> __C.UIView? previewProvider;
    __C.T1ImmersiveMediaOriginCoordinating? timelineCoordinator;
}

/* instance methods */
- (id)mediaOriginViewForIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginFrameInWindowForIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginContentFrameInWindowForIndex:(long long)index;
- (void)prepareMediaOriginForIndex:(long long)index;
- (_Bool)hideMediaOriginForIndex:(long long)index;
- (_Bool)restoreHiddenMediaOrigins;
- (void)mediaOriginDismissDidCompleteForIndex:(long long)index;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift36BottomSegmentReopenOriginCoordinator_h */
