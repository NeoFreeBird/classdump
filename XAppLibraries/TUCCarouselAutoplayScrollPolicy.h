//
#ifndef TUCCarouselAutoplayScrollPolicy_h
#define TUCCarouselAutoplayScrollPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface TUCCarouselAutoplayScrollPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 autoplayConditionsDidChangeBlock;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (void)didEndScrolling;
- (id)init;

@end

#endif /* TUCCarouselAutoplayScrollPolicy_h */
