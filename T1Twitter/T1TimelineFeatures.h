//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TimelineFeatures_h
#define T1TimelineFeatures_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject, NSString;

@interface T1TimelineFeatures : NSObject

@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool isPinnedRepliesConsumptionEnabled;
@property (readonly, nonatomic) _Bool isPinnedRepliesCreationEnabled;
@property (readonly, nonatomic) _Bool isHomeSSPEnabled;
@property (readonly, nonatomic) _Bool isHomeSSPClientsideEnabled;
@property (readonly, nonatomic) _Bool isHomeTimelineStatusInjectionFromPermalinkEnabled;
@property (readonly, nonatomic) _Bool isHomeTimelineStatusInjectionFromNotificationEnabled;
@property (readonly, nonatomic) _Bool isHomeTimelineStatusInjectionOpenImmersiveForVideoEnabled;
@property (readonly, nonatomic) _Bool isStatusInjectionEnabledNoImpression;
@property (readonly, nonatomic) double homeTimelineStatusInjectionTimeoutSeconds;
@property (readonly, nonatomic) _Bool isSSPNativeAdS2SMigrationEnabled;
@property (readonly, nonatomic) _Bool isSSPNativeAdReloadDataEnabled;
@property (readonly, nonatomic) _Bool isSSPNativeAdRepositoryScribeEnabled;
@property (readonly, nonatomic) _Bool isSSPNativeAdCorrelatorEnabled;
@property (readonly, nonatomic) _Bool isSpotlightSSPEnabled;
@property (readonly, nonatomic) _Bool isSpotlightSSPClientsideEnabled;
@property (readonly, nonatomic) _Bool isSpotlightSSPClientsidePreloadEnabled;
@property (readonly, nonatomic) _Bool isImmersiveSSPEnabled;
@property (readonly, nonatomic) _Bool isImmersiveSSPClientsideEnabled;
@property (readonly, nonatomic) _Bool isImmersiveSSPDefaultVideoPlayerEnabled;
@property (readonly, nonatomic) _Bool isConversationSSPEnabled;
@property (readonly, nonatomic) _Bool isConversationSSPClientsideEnabled;
@property (readonly, nonatomic) _Bool isProfileSSPEnabled;
@property (readonly, nonatomic) _Bool isProfileSSPClientsideEnabled;
@property (readonly, nonatomic) _Bool isSSPReportIllegalContentEnabled;
@property (readonly, nonatomic) _Bool isSSPReportEnabled;
@property (readonly, nonatomic) NSString *googleSSPNativeAdUnitID;
@property (readonly, nonatomic) NSString *googleSSPNativeSpotlightAdUnitID;
@property (readonly, nonatomic) NSString *googleSSPNativeImmersiveAdUnitID;
@property (readonly, nonatomic) NSString *googleSSPNativeImmersiveConfiguration;
@property (readonly, nonatomic) NSString *googleSSPNativeConversationAdUnitID;
@property (readonly, nonatomic) NSString *googleSSPNativeProfileAdUnitID;
@property (readonly, nonatomic) NSString *googleSSPReportIllegalContentURLString;
@property (readonly, nonatomic) unsigned long long googleSSPNativeAdLRUCacheLimit;
@property (readonly, nonatomic) _Bool isSSPNativeAdCacheEvictionFixEnabled;
@property (readonly, nonatomic) _Bool hasSSPDebugMenu;
@property (readonly, nonatomic) _Bool isGrokBackendControlledAnalyzeButtonEnabled;
@property (readonly, nonatomic) _Bool isGrokVideoImagineMenuEnabled;
@property (readonly, nonatomic) _Bool isSportsPostContextEnabled;
@property (readonly, nonatomic) _Bool isElectionsPostContextEnabled;
@property (readonly, nonatomic) _Bool isConversationInfiniteTimelineEnabled;
@property (readonly, nonatomic) _Bool isScrollToTopPromotedImpressionVisibleContentOnlyEnabled;
@property (readonly, nonatomic) _Bool isVideoAttributionSourceTweetScribeEnabled;
@property (readonly, nonatomic) _Bool isVideoAttributionQuotedSourceTweetScribeEnabled;
@property (readonly, nonatomic) _Bool isVideoAttributionBroadcastSourceTweetScribeEnabled;
@property (readonly, nonatomic) _Bool isVideoAttributionAuthorIDScribeEnabled;

/* instance methods */
- (id)init;
- (id)initWithFeatureSwitches:(id)switches;

@end

#endif /* T1TimelineFeatures_h */
