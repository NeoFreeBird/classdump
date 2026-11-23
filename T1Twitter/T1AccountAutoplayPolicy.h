//
#ifndef T1AccountAutoplayPolicy_h
#define T1AccountAutoplayPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface T1AccountAutoplayPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *autoplayConditionsDidChangeBlock;
    NSNumber"16@0:8 *currentSettings;
    NSNumber"16@0:8 *currentNetworkReachabilityStatus;
    NSNumber"16@0:8 *ignoreCurrentSettingsWhenAutoplayingGif;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)initWithCurrentSettings:(id /* block */)settings currentNetworkReachabilityStatus:(id /* block */)status notificationCenter:(id)center ignoreCurrentSettingsWhenAutoplayingGif:(_Bool)gif;
- (void)dealloc;
- (id)initWithIgnoreCurrentSettingsWhenAutoplayingGif:(_Bool)gif;
- (void)autoplayConditionsDidChange;
- (id)init;

@end

#endif /* T1AccountAutoplayPolicy_h */
