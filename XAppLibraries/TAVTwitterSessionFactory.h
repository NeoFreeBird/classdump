//
#ifndef TAVTwitterSessionFactory_h
#define TAVTwitterSessionFactory_h
@import Foundation;

@class NSObject;

@interface TAVTwitterSessionFactory : NSObject

/* class methods */
+ (id)scribeElementForSessionSource:(id)source;
+ (id)sessionWithSource:(id)source account:(id)account features:(id)features configuration:(id)configuration observers:(id)observers initialScribeContext:(id)context;
+ (id)sessionWithBroadcast:(id)broadcast cardDataSource:(id)source account:(id)account features:(id)features configuration:(id)configuration observers:(id)observers initialScribeContext:(id)context;
+ (id)sessionWithMediaEntity:(id)entity contentMediaIdentifier:(id)identifier ownerIdentifier:(id)identifier account:(id)account features:(id)features configuration:(id)configuration observers:(id)observers initialScribeContext:(id)context baseScribeItem:(id)item promotedContent:(id)content;
+ (id)localCacheMediaURLForMediaEntity:(id)entity features:(id)features filenameExtension:(id)extension;
+ (id)_tfn_sessionforAmplifyVideoCardWithSessionSource:(id)source account:(id)account features:(id)features configuration:(id)configuration dynamicAdProvider:(id)provider initialScribeContext:(id)context observers:(id)observers scribe:(id)scribe;
+ (id)_tfn_sessionForYoutTubeVideoWithSessionSource:(id)source account:(id)account features:(id)features configuration:(id)configuration initialScribeContext:(id)context observers:(id)observers scribe:(id)scribe;
+ (id)_tfn_sessionForMediaEnityVideoWithSessionSource:(id)source account:(id)account features:(id)features configuration:(id)configuration dynamicAdProvider:(id)provider initialScribeContext:(id)context observers:(id)observers scribe:(id)scribe;
+ (id)_tfn_sessionForGIFWithSessionSource:(id)source account:(id)account features:(id)features configuration:(id)configuration dynamicAdProvider:(id)provider initialScribeContext:(id)context observers:(id)observers scribe:(id)scribe;
+ (id)_tfn_cardContextForSessionSource:(id)source account:(id)account;
+ (id)_tfn_dynamicAdProviderForSessionSource:(id)source cardContext:(id)context account:(id)account features:(id)features configuration:(id)configuration;
+ (id)_tfn_playlistItemProviderForBroadcast:(id)broadcast adSessionSource:(id)source account:(id)account features:(id)features playlistItemMetadata:(id)metadata configuration:(id)configuration bufferingConfiguration:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })configuration captionsConfiguration:(id)configuration outputViewFactory:(id)factory latestReplayPlaylist:(_Bool)playlist initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
+ (id)_tfn_liveVideoTypeForBroadcast:(id)broadcast sessionSource:(id)source;
+ (id)_tfn_promotedMetadataForSessionSource:(id)source cardContext:(id)context;
+ (id)_tfn_ctaInfoForPrimaryMediaEntity:(id)entity;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })initialPlaybackTimeForMedia:(id)media;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })initialPlaybackTimeForBroadcast:(id)broadcast;
+ (id)additionalQueryParametersForHLSURLWithFeatures:(id)features forceHighestQualityAudio:(_Bool)audio;
+ (id)_tfn_amplifyVideoCardMediaPlaylistURLForSessionSource:(id)source account:(id)account;
+ (id)_tfn_playerTechnologyBuilderWithURL:(id)url cookies:(id)cookies downloader:(id)downloader hlsPlaylistLoadingPolicy:(long long)policy hlsPlaylists:(id)playlists startsOnFirstEligibleVariant:(_Bool)variant disableVideoRendering:(_Bool)rendering features:(id)features configuration:(id)configuration outputViewFactory:(id)factory account:(id)account;
+ (id)_tfn_defaultOutputViewFactoryWithFeatures:(id)features configuration:(id)configuration;

@end

#endif /* TAVTwitterSessionFactory_h */
