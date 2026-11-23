//
#ifndef _TtC6XVideo20AutoplayUpdatePolicy_h
#define _TtC6XVideo20AutoplayUpdatePolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject, _$syycSg;

@interface XVideo.AutoplayUpdatePolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    (() -> ())? autoplayConditionsDidChangeBlock;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)init;

@end

#endif /* _TtC6XVideo20AutoplayUpdatePolicy_h */
