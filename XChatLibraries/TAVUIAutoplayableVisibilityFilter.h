//
#ifndef TAVUIAutoplayableVisibilityFilter_h
#define TAVUIAutoplayableVisibilityFilter_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface TAVUIAutoplayableVisibilityFilter : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 autoplayScrollView;
    @40@0:8:16@24@32 visibilityRequirement;
    @40@0:8:16@24@32 debugView;
}

/* instance methods */
- (id)initWithAutoplayScrollView:(id)view visibilityRequirement:(double)requirement;
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)init;

@end

#endif /* TAVUIAutoplayableVisibilityFilter_h */
