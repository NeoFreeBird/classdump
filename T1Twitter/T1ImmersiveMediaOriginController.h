//
#ifndef T1ImmersiveMediaOriginController_h
#define T1ImmersiveMediaOriginController_h
@import Foundation;

@class NSObject;

@interface T1ImmersiveMediaOriginController : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *mediaOriginView;
    NSNumber"16@0:8 *mediaOriginCoordinator;
    NSNumber"16@0:8 *currentIndexProvider;
}

@property (nonatomic, readonly) _Bool currentMediaOriginRepresentsCurrentMedia;

/* instance methods */
- (id)initWithMediaOriginView:(id)view mediaOriginCoordinator:(id)coordinator currentIndexProvider:(id /* block */)provider;
- (id)sourceOriginSnapshotWithFallbackFrame:(id /* block */)frame fallbackCornerRadius:(double)radius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceFrameWithFallback:(id /* block */)fallback;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceContentFrameWithFallback:(id /* block */)fallback;
- (id)currentMediaOriginView;
- (id)currentMediaOriginPlayerView;
- (id)currentMediaOriginPlayer;
- (id)currentMediaOriginTransitionView;
- (_Bool)isDynamicMediaOriginView:(id)view;
- (void)prepareMediaOriginForDismissal;
- (_Bool)hideCurrentSourceForMorph;
- (_Bool)hasMediaOriginCoordinator;
- (_Bool)restoreHiddenSources;
- (void)notifyWillReceivePlayerHandoff;
- (void)notifyDidReceivePlayerHandoff;
- (void)notifyDismissDidComplete;
- (id)currentTransitionOverlayViews;
- (id)currentDismissForegroundViews;
- (id)currentDismissCoveringView;
- (id)init;

@end

#endif /* T1ImmersiveMediaOriginController_h */
