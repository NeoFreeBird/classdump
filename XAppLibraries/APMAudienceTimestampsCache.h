//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
