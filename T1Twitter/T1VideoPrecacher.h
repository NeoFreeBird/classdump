//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VideoPrecacher_h
#define T1VideoPrecacher_h
@import Foundation;

#include "T1PlayerFactory.h"

@class NSMutableArray, NSMutableDictionary, NSObject, TAVWallTime;

@interface T1VideoPrecacher : NSObject

@property (readonly, nonatomic) T1PlayerFactory *playerFactory;
@property (readonly, nonatomic) NSMutableDictionary *lastCachedEntries;
@property (readonly, nonatomic) NSMutableArray *recentlyCachedVideos;
@property (nonatomic) unsigned long long lastIndex;
@property (retain, nonatomic) TAVWallTime *playerCreationTimestamp;
@property (readonly, nonatomic) unsigned long long precachedPlayerCount;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithPlayerFactory:(id)factory;
- (void)dealloc;
- (void)_t1_applicationDidEnterBackground:(id)background;
- (void)removeAllPlayers;
- (void)removeAllNotActivePlayers;
- (_Bool)_t1_precachingEnabledForMediaForwardStatus:(id)status withAccount:(id)account;
- (_Bool)_t1_precachingEnabledForEntity:(id)entity withAccount:(id)account;
- (void)precacheVideosForStatuses:(id)statuses withAccount:(id)account withDataViewController:(id)controller;
- (id)_t1_unifiedCardPlayerIdentifiableForStatus:(id)status;
- (id)_t1_playerSessionProducersForStatus:(id)status account:(id)account;
- (id)_t1_scribeContextForStatus:(id)status withDataViewController:(id)controller;
- (id)_t1_buildScribeContextWithController:(id)controller withStatus:(id)status;

@end

#endif /* T1VideoPrecacher_h */
