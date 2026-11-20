//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NudgeManager_h
#define T1NudgeManager_h
@import Foundation;

@class NSObject;

@interface T1NudgeManager : NSObject

/* class methods */
+ (void)markURLAsVisited:(id)visited onStatus:(id)status forAccount:(id)account;
+ (_Bool)hasBeenExposedToExpandedArticleNudgeForAccount:(id)account;
+ (void)_t1_recordArticleNudgeRecievedIfNeededForFeatureSwitches:(id)switches;
+ (_Bool)_t1_hasHitDailyArticleNudgeLimitForFeatureSwitches:(id)switches;
+ (void)clearExpiredArticleNudgeRateLimitCache;
+ (id)eligibleURLEntityForLinksNudgeWithStatus:(id)status account:(id)account;
+ (void)_t1_scribeAllLinksNudgeActionIfNeeded:(id)needed forURLEntities:(id)urlentities status:(id)status account:(id)account;
+ (void)_t1_scribeNudgeActionIfNeeded:(id)needed forPage:(id)page forURLEntities:(id)urlentities status:(id)status account:(id)account;

@end

#endif /* T1NudgeManager_h */
