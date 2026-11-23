//
#ifndef VideoClipping_h
#define VideoClipping_h
@import Foundation;

@class NSObject;

@interface VideoClipping : NSObject // (Swift)

/* class methods */
+ (id)liveReplayBroadcastForStatus:(id)status account:(id)account;
+ (id)scribeParameters:(id)parameters forClipCreationFromStatus:(id)status account:(id)account;
+ (id)repostMenuScribeEntryPoint;
+ (id)composerButtonScribeEntryPoint;
+ (id)linkScribeEntryPoint;
+ (id)internalScribeSource;
+ (id)externalScribeSource;
+ (double)repostMenuMinDurationForFeatureSwitches:(id)switches;
+ (_Bool)isAttributionEnabledForFeatureSwitches:(id)switches;
+ (_Bool)isClipCreationEligibleForStatus:(id)status account:(id)account;
+ (id)clipPermalinkURLStringForStatus:(id)status;
+ (id)clipTimestampForURLString:(id)urlstring featureSwitches:(id)switches;
+ (id)allowedClipTimestampForURLString:(id)urlstring status:(id)status account:(id)account;
+ (id)scribeParametersForClipInText:(id)text entryPoint:(id)point featureSwitches:(id)switches;
+ (id)scribeParametersForClipStatusID:(long long)id startSeconds:(long long)seconds endSeconds:(long long)seconds source:(id)source;

/* instance methods */
- (id)init;

@end

#endif /* VideoClipping_h */
