//
#ifndef T1AutoplayAccessibilityPolicy_h
#define T1AutoplayAccessibilityPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface T1AutoplayAccessibilityPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *autoplayConditionsDidChangeBlock;
    NSNumber"16@0:8 *isVoiceOverRunning;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)init;
- (void)dealloc;
- (void)voiceoverSettingsDidChange;

@end

#endif /* T1AutoplayAccessibilityPolicy_h */
