//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImmersiveMediaOriginCoordinating_Protocol_h
#define T1ImmersiveMediaOriginCoordinating_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ImmersiveMediaOriginCoordinating <NSObject>

@required

/* required instance methods */
- (id)mediaOriginViewForIndex:(long long)index;
- (id)mediaOriginViewForIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginFrameInWindowForIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginFrameInWindowForIndex:(long long)index;
- (void)prepareMediaOriginForIndex:(long long)index;
- (void)prepareMediaOriginForIndex:(long long)index;
- (_Bool)hideMediaOriginForIndex:(long long)index;
- (_Bool)hideMediaOriginForIndex:(long long)index;
- (_Bool)restoreHiddenMediaOrigins;

@optional

/* optional instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginContentFrameInWindowForIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaOriginContentFrameInWindowForIndex:(long long)index;
- (id)mediaOriginPlayerViewForIndex:(long long)index;
- (id)mediaOriginPlayerViewForIndex:(long long)index;
- (id)mediaOriginPlayerForIndex:(long long)index;
- (id)mediaOriginPlayerForIndex:(long long)index;
- (void)mediaOriginWillReceivePlayerHandoffForIndex:(long long)index;
- (void)mediaOriginWillReceivePlayerHandoffForIndex:(long long)index;
- (void)mediaOriginDidReceivePlayerHandoffForIndex:(long long)index;
- (void)mediaOriginDidReceivePlayerHandoffForIndex:(long long)index;
- (void)mediaOriginDismissDidCompleteForIndex:(long long)index;
- (void)mediaOriginDismissDidCompleteForIndex:(long long)index;
- (id)mediaOriginTransitionViewForIndex:(long long)index;
- (id)mediaOriginTransitionViewForIndex:(long long)index;
- (id)mediaOriginTransitionOverlayViewsForIndex:(long long)index;
- (id)mediaOriginTransitionOverlayViewsForIndex:(long long)index;
- (id)mediaOriginDismissForegroundViewsForIndex:(long long)index;
- (id)mediaOriginDismissForegroundViewsForIndex:(long long)index;
- (id)mediaOriginDismissCoveringViewForIndex:(long long)index;
- (id)mediaOriginDismissCoveringViewForIndex:(long long)index;

@end

#endif /* T1ImmersiveMediaOriginCoordinating_Protocol_h */
