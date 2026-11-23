//
#ifndef TAVUIAutoplayDisablingFilter_h
#define TAVUIAutoplayDisablingFilter_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject;

@interface TAVUIAutoplayDisablingFilter : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 autoplayConditionsDidChangeBlock;
    @40@0:8:16@24@32 shouldHardStop;
}

@property (nonatomic) _Bool shouldDisableAutoplay;

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)initWithShouldDisableAutoplay:(_Bool)autoplay shouldHardStop:(_Bool)stop;
- (id)init;

@end

#endif /* TAVUIAutoplayDisablingFilter_h */
