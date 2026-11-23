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
