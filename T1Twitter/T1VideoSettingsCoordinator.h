//
#ifndef T1VideoSettingsCoordinator_h
#define T1VideoSettingsCoordinator_h
@import Foundation;

#include "AVRoutePickerViewDelegate-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSObject, TAVPlayerView;

@interface T1VideoSettingsCoordinator : NSObject <AVRoutePickerViewDelegate, TNLCommunicationAgentObserver, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *isPresentingRoutePicker;
    NSNumber"16@0:8 *routePickerView;
    NSNumber"16@0:8 *settingsSource;
    NSNumber"16@0:8 *overridePlaybackRateOption;
    NSNumber"16@0:8 *delegate;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *mediaTabFeatureAccess;
    NSNumber"16@0:8 *$__lazy_storage_$_isBroadcastCaptionsEnabled;
    NSNumber"16@0:8 *hasRenderedCaptions;
    NSNumber"16@0:8 *settingsState;
}

@property (nonatomic) _Bool shouldShowVideoSettingsButton;
@property (nonatomic, weak) TAVPlayerView *playerView;
@property (nonatomic, retain) id <TVPPlayerSessionSource> sessionSource;

/* instance methods */
- (void)routePickerViewWillBeginPresentingRoutes:(id)routes;
- (void)routePickerViewDidEndPresentingRoutes:(id)routes;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)updateSettingsSource:(id)source statusPerspective:(id)perspective selectedMediaEntity:(id)entity;
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (void)videoSettingsDidChange;
- (id)init;

@end

#endif /* T1VideoSettingsCoordinator_h */
