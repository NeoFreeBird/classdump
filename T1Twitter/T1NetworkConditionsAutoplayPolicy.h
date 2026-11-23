//
#ifndef T1NetworkConditionsAutoplayPolicy_h
#define T1NetworkConditionsAutoplayPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface T1NetworkConditionsAutoplayPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *autoplayConditionsDidChangeBlock;
    NSNumber"16@0:8 *networkMonitor;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)initWithNetworkMonitor:(id)monitor notificationCenter:(id)center;
- (void)dealloc;
- (id)init;
- (void)autoplayConditionsDidChange;

@end

#endif /* T1NetworkConditionsAutoplayPolicy_h */
