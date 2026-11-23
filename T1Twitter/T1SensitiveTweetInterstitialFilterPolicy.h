//
#ifndef T1SensitiveTweetInterstitialFilterPolicy_h
#define T1SensitiveTweetInterstitialFilterPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface T1SensitiveTweetInterstitialFilterPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *autoplayConditionsDidChangeBlock;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)initWithAccount:(id)account;
- (void)sensitiveContentRevealedStateDidChange;
- (id)init;

@end

#endif /* T1SensitiveTweetInterstitialFilterPolicy_h */
