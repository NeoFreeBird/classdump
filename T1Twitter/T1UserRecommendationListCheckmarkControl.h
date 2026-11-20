//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationListCheckmarkControl_h
#define T1UserRecommendationListCheckmarkControl_h
@import Foundation;

#include "T1UserRecommendationListCheckableActionControl-Protocol.h"

@class NSString, TFNCheckmarkControl, TFSTwitterScribeContext, TFSTwitterUserReference;

@interface T1UserRecommendationListCheckmarkControl : TFNCheckmarkControl <T1UserRecommendationListCheckableActionControl>

@property (nonatomic) _Bool checked;
@property (retain, nonatomic) TFSTwitterUserReference *associatedUserReference;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* T1UserRecommendationListCheckmarkControl_h */
