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
