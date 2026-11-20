//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationListFollowAllControl_h
#define T1UserRecommendationListFollowAllControl_h
@import Foundation;

#include "T1UserRecommendationListSectionHeaderCheckableControl-Protocol.h"

@class TFNButton, TFNFlexibleLayoutView;

@interface T1UserRecommendationListFollowAllControl : TFNFlexibleLayoutView <T1UserRecommendationListSectionHeaderCheckableControl> {
    /* instance variables */
    TFNButton *_button;
}

@property (nonatomic) _Bool checked;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForControl;

/* instance methods */
- (id)init;

@end

#endif /* T1UserRecommendationListFollowAllControl_h */
