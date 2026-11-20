//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVTwitterLiveStreamPlaylistItemProvider_h
#define TAVTwitterLiveStreamPlaylistItemProvider_h
@import Foundation;

#include "TAVAnalyticsPlaylistItemMetadata.h"
#include "TAVCaptionsConfiguration.h"
#include "TAVPlayerOutputViewFactory-Protocol.h"
#include "TAVPlaylistItemProvider-Protocol.h"
#include "TBCTwitterAccount-Protocol.h"
#include "TVPBroadcastVideoContext.h"
#include "TVPFeatures-Protocol.h"

@class NSObject, NSString;

@interface TAVTwitterLiveStreamPlaylistItemProvider : NSObject <TAVPlaylistItemProvider>

@property (readonly, nonatomic) id <TBCTwitterAccount> account;
@property (readonly, nonatomic) id <TVPFeatures> features;
@property (readonly, copy, nonatomic) TAVAnalyticsPlaylistItemMetadata *analyticsMetadata;
@property (readonly, nonatomic) _Bool locationSharingRulesEnforced;
@property (readonly, nonatomic) _Bool latestReplayPlaylist;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialPlaybackTime;
@property (readonly, nonatomic) TVPBroadcastVideoContext *videoContext;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; } bufferingConfiguration;
@property (readonly, copy, nonatomic) TAVCaptionsConfiguration *captionsConfiguration;
@property (readonly, nonatomic) unsigned long long maximumRetries;
@property (readonly, nonatomic) long long hlsPlaylistLoadingPolicy;
@property (readonly, nonatomic) id <TAVPlayerOutputViewFactory> outputViewFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)lhlsPlayerClientVersionWithFeatures:(id)features isLHLS:(_Bool)lhls;

/* instance methods */
- (id)initWithAccount:(id)account features:(id)features analyticsMetadata:(id)metadata locationSharingRulesEnforced:(_Bool)enforced latestReplayPlaylist:(_Bool)playlist initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time videoContext:(id)context bufferingConfiguration:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })configuration captionsConfiguration:(id)configuration maximumRetries:(unsigned long long)retries hlsPlaylistLoadingPolicy:(long long)policy outputViewFactory:(id)factory;
- (void)providePlaylistItemWithCompletion:(id /* block */)completion;
- (void)private_handleStreamStatus:(id)status completion:(id /* block */)completion;
- (id)private_playlistItemWithStreamStatus:(id)status isLive:(_Bool)live useTAVLHLSLib:(_Bool)tavlhlslib useDeltaManifest:(_Bool)manifest retainsPiPController:(_Bool)pcontroller lhlsPlayerClientVersion:(long long)version cookies:(id)cookies;
- (id)private_playlistItemWithDownloadedReplay;
- (id)init;

@end

#endif /* TAVTwitterLiveStreamPlaylistItemProvider_h */
