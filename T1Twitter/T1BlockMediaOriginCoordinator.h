//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BlockMediaOriginCoordinator_h
#define T1BlockMediaOriginCoordinator_h
@import Foundation;

#include "T1ImmersiveMediaOriginCoordinating-Protocol.h"

@class NSObject;

@interface T1BlockMediaOriginCoordinator : NSObject <T1ImmersiveMediaOriginCoordinating> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewForIndex;
    NSNumber"16@0:8 *playerViewForIndex;
    NSNumber"16@0:8 *playerForIndex;
    NSNumber"16@0:8 *frameInWindowForIndex;
    NSNumber"16@0:8 *contentFrameInWindowForIndex;
    NSNumber"16@0:8 *prepareForIndex;
    NSNumber"16@0:8 *hideForIndex;
    NSNumber"16@0:8 *restoreHiddenViews;
    NSNumber"16@0:8 *willReceivePlayerHandoffForIndex;
    NSNumber"16@0:8 *didReceivePlayerHandoffForIndex;
    NSNumber"16@0:8 *transitionViewForIndex;
    NSNumber"16@0:8 *dismissDidCompleteForIndex;
    NSNumber"16@0:8 *overlayViewsForIndex;
    NSNumber"16@0:8 *dismissForegroundViewsForIndex;
    NSNumber"16@0:8 *dismissCoveringViewForIndex;
    NSNumber"16@0:8 *originIndexForMediaIndex;
}

/* instance methods */
- (id)initWithViewForIndex:(id /* block */)index frameInWindowForIndex:(id /* block */)index prepareForIndex:(id /* block */)index hideForIndex:(id /* block */)index restoreHiddenViews:(id /* block */)views;
- (id)initWithViewForIndex:(id /* block */)index frameInWindowForIndex:(id /* block */)index contentFrameInWindowForIndex:(id /* block */)index playerViewForIndex:(id /* block */)index playerForIndex:(id /* block */)index prepareForIndex:(id /* block */)index hideForIndex:(id /* block */)index restoreHiddenViews:(id /* block */)views willReceivePlayerHandoffForIndex:(id /* block */)index didReceivePlayerHandoffForIndex:(id /* block */)index transitionViewForIndex:(id /* block */)index dismissDidCompleteForIndex:(id /* block */)index overlayViewsForIndex:(id /* block */)index dismissForegroundViewsForIndex:(id /* block */)index dismissCoveringViewForIndex:(id /* block */)index originIndexForMediaIndex:(id /* block */)index;
- (id)mediaOriginViewForIndex:(long long)index;
- (id)mediaOriginPlayerViewForIndex:(long long)index;
- (id)mediaOriginPlayerForIndex:(long long)index;
- (id)mediaOriginTransitionViewForIndex:(long long)index;
- (id)mediaOriginTransitionOverlayViewsForIndex:(long long)index;
- (id)mediaOriginDismissForegroundViewsForIndex:(long long)index;
- (id)mediaOriginDismissCoveringViewForIndex:(long long)index;
- (void)mediaOriginDismissDidCompleteForIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginFrameInWindowForIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginContentFrameInWindowForIndex:(long long)index;
- (void)prepareMediaOriginForIndex:(long long)index;
- (_Bool)hideMediaOriginForIndex:(long long)index;
- (_Bool)restoreHiddenMediaOrigins;
- (void)mediaOriginWillReceivePlayerHandoffForIndex:(long long)index;
- (void)mediaOriginDidReceivePlayerHandoffForIndex:(long long)index;
- (id)init;

@end

#endif /* T1BlockMediaOriginCoordinator_h */
