//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNCheckmarkControl_ONBUserRecommendationListSectionHeaderView_h
#define TFNCheckmarkControl_ONBUserRecommendationListSectionHeaderView_h
@import Foundation;

#include "T1UserRecommendationListSectionHeaderCheckableControl-Protocol.h"
#include "T1UserRecommendationListSectionHeaderCheckableControlHost-Protocol.h"

@class TFNModuleTableHeaderView, TFNTappableHighlightView, UIControl;

@interface TFNCheckmarkControl (ONBUserRecommendationListSectionHeaderView) <T1UserRecommendationListSectionHeaderCheckableControl>

/* instance methods */
- (_Bool)checked;

@end

#endif /* TFNCheckmarkControl_ONBUserRecommendationListSectionHeaderView_h */
