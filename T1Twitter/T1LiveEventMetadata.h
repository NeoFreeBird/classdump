//
#ifndef T1LiveEventMetadata_h
#define T1LiveEventMetadata_h
@import Foundation;

#include "T1LiveEvent.h"
#include "T1LiveEventCarousel.h"

@class NSObject, NSString, TFSTwitterLiveEventScore;

@interface T1LiveEventMetadata : NSObject

@property (readonly, copy, nonatomic) T1LiveEvent *liveEvent;
@property (readonly, copy, nonatomic) T1LiveEventCarousel *carousel;
@property (readonly, copy, nonatomic) TFSTwitterLiveEventScore *score;
@property (readonly, nonatomic) double pollingInterval;
@property (readonly, copy, nonatomic) NSString *timelineID;

/* instance methods */
- (id)init;
- (id)initWithLiveEvent:(id)event carousel:(id)carousel score:(id)score pollingInterval:(double)interval timelineID:(id)id;

@end

#endif /* T1LiveEventMetadata_h */
