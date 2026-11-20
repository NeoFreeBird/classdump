//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift44URTTimelinePagedCarouselAutoplayScrollPolicy_h
#define _TtC14T1TwitterSwift44URTTimelinePagedCarouselAutoplayScrollPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"

@class NSObject, _$syycSg;

@interface T1TwitterSwift.URTTimelinePagedCarouselAutoplayScrollPolicy : NSObject <TAVUIAutoplayFilterPolicy> { // (Swift)
    /* instance variables */
    (() -> ())? autoplayConditionsDidChangeBlock;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift44URTTimelinePagedCarouselAutoplayScrollPolicy_h */
