//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMSequenceTimestampsCache_h
#define APMSequenceTimestampsCache_h
@import Foundation;

@class NSMutableDictionary, NSNumber, NSObject;

@interface APMSequenceTimestampsCache : NSObject {
    /* instance variables */
    NSMutableDictionary *_allSequenceTimestampsByFilterID;
}

@property (readonly, copy, nonatomic) NSNumber *audienceID;

/* instance methods */
- (id)initWithAudienceID:(id)id;
- (id)sequenceTimestampsForFilterID:(id)id;
- (void)addEventFilterTimestamp:(double)timestamp forFilterID:(id)id;
- (void)setUserPropertyTimestamp:(double)timestamp forFilterID:(id)id;
- (id)sequenceFilterResultTimestamps;

@end

#endif /* APMSequenceTimestampsCache_h */
