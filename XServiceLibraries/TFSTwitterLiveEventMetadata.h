//
#ifndef TFSTwitterLiveEventMetadata_h
#define TFSTwitterLiveEventMetadata_h
@import Foundation;

#include "TFSTwitterLiveEventScore.h"

@class NSArray, NSDictionary, NSObject, NSString;

@interface TFSTwitterLiveEventMetadata : NSObject // (Swift)

@property (nonatomic, readonly) NSDictionary *statuses;
@property (nonatomic, readonly) NSDictionary *users;
@property (nonatomic, readonly) NSDictionary *broadcasts;
@property (nonatomic, readonly) NSDictionary *audiospaces;
@property (nonatomic, readonly) NSDictionary *liveEvents;
@property (nonatomic, readonly) NSDictionary *slates;
@property (nonatomic, readonly) NSArray *carousel;
@property (nonatomic, readonly) TFSTwitterLiveEventScore *score;
@property (nonatomic, readonly) double pollingInterval;
@property (nonatomic, readonly) NSString *timelineID;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterLiveEventMetadata_h */
