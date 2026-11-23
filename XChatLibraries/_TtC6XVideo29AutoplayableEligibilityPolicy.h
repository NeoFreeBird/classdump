//
#ifndef _TtC6XVideo29AutoplayableEligibilityPolicy_h
#define _TtC6XVideo29AutoplayableEligibilityPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject, _$sSbSo17TAVUIAutoplayable_pc;

@interface XVideo.AutoplayableEligibilityPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    (__C.TAVUIAutoplayable) -> Swift.Bool isEligibleForAutoplay;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)init;

@end

#endif /* _TtC6XVideo29AutoplayableEligibilityPolicy_h */
