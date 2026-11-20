//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ScheduledBroadcastAutoplayPolicy_h
#define T1ScheduledBroadcastAutoplayPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface T1ScheduledBroadcastAutoplayPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *autoplayConditionsDidChangeBlock;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)initWithNotificationCenter:(id)center;
- (void)autoplayConditionsDidChange;
- (id)init;

@end

#endif /* T1ScheduledBroadcastAutoplayPolicy_h */
