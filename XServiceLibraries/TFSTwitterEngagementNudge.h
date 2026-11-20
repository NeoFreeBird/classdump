//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEngagementNudge_h
#define TFSTwitterEngagementNudge_h
@import Foundation;

#include "TFSNudgeActionPayload.h"

@class NSObject;

@interface TFSTwitterEngagementNudge : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 engagementNudge;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) TFSNudgeActionPayload *actionPayload;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterEngagementNudge_h */
