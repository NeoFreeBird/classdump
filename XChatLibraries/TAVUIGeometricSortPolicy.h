//
#ifndef TAVUIGeometricSortPolicy_h
#define TAVUIGeometricSortPolicy_h
@import Foundation;

#include "TAVUIAutoplaySortPolicy-Protocol.h"

@class NSObject;

@interface TAVUIGeometricSortPolicy : NSObject <TAVUIAutoplaySortPolicy> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 autoplayScrollView;
    @40@0:8:16@24@32 lastContentBounds;
    @40@0:8:16@24@32 lastInsetBounds;
    @40@0:8:16@24@32 lastAutoplayTargetPoint;
    @40@0:8:16@24@32 kMaxRampDistance;
    @40@0:8:16@24@32 debugView;
}

/* instance methods */
- (id)initWithAutoplayScrollView:(id)view;
- (_Bool)autoplayablesAreInBestToWorstOrderWithFirstAutoplayable:(id)autoplayable secondAutoplayable:(id)autoplayable;
- (id)init;

@end

#endif /* TAVUIGeometricSortPolicy_h */
