//
#ifndef APMAudienceTimestampsCache_h
#define APMAudienceTimestampsCache_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface APMAudienceTimestampsCache : NSObject {
    /* instance variables */
    NSMutableDictionary *_cachedDynamicFilterEvaluationTimestamps;
    NSMutableDictionary *_cachedSequenceEvaluationTimestamps;
}

/* instance methods */
- (id)init;
- (void)populateCachedTimestamps:(id)timestamps audienceID:(id)id;
- (void)addEvaluationTimestamp:(double)timestamp forFilter:(id)filter;
- (id)dynamicTimestampsForAudienceID:(id)id;
- (id)sequenceTimestampsForAudienceID:(id)id;

@end

#endif /* APMAudienceTimestampsCache_h */
