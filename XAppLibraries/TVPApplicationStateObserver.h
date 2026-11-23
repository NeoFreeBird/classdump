//
#ifndef TVPApplicationStateObserver_h
#define TVPApplicationStateObserver_h
@import Foundation;

#include "TAVPlayback-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlaybackState.h"
#include "TVPFeatures-Protocol.h"

@class NSBlockOperation, NSObject, NSString, UIViewController, XNAVEventObservationToken;

@interface TVPApplicationStateObserver : NSObject <TAVPlaybackObserver> {
    /* instance variables */
    id _interactivePopTransitionWillStartObserver;
    id _interactivePopTransitionDidEndObserver;
    XNAVEventObservationToken *_stackEventObservationToken;
    NSBlockOperation *_pauseOperation;
    double _shouldShowVideoUpsellTS;
    id /* block */ _upsellCallback;
    _Bool _allowBackgroundPlayback;
}

@property (weak, nonatomic) id <TAVPlayback> observedPlayer;
@property (retain, nonatomic) TAVPlaybackState *lastActivePlaybackState;
@property (retain, nonatomic) TAVPlaybackState *lastPlaybackState;
@property (nonatomic) _Bool applicationHasResignedActive;
@property (retain, nonatomic) TAVPlaybackState *stateAtStartOfInteractiveTransition;
@property (copy, nonatomic) NSString *transitionParentControllerKey;
@property (weak, nonatomic) UIViewController *stackInteractivePopParentController;
@property (readonly, nonatomic) id <TVPFeatures> features;
@property (copy, nonatomic) id /* block */ didPauseDueToBackground;

/* instance methods */
- (id)initWithPauseCallback:(id /* block */)callback upsellCallback:(id /* block */)callback features:(id)features allowBackgroundPlayback:(_Bool)playback;
- (void)dealloc;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)_t1_applicationWillResignActive:(id)active;
- (void)_t1_pauseDueToBackgroundAfterDelay;
- (_Bool)_t1_pausePlayerDueToBackground;
- (void)_t1_applicationDidBecomeActive:(id)active;
- (void)_t1_interactivePopWillStart:(id)start;
- (void)_t1_interactivePopDidEnd:(id)end;
- (void)_t1_handleStackEvent:(id)event;
- (void)_t1_stackInteractivePopBeganFromViewController:(id)controller toViewController:(id)controller;
- (void)_t1_stackInteractivePopEndedFromViewController:(id)controller toViewController:(id)controller cancelled:(_Bool)cancelled;
- (_Bool)_t1_isObservedPlayerPresentingInViewController:(id)controller;
- (_Bool)_t1_isAudioContent;

@end

#endif /* TVPApplicationStateObserver_h */
