//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationListFollowAllSectionHeaderView_h
#define T1UserRecommendationListFollowAllSectionHeaderView_h
@import Foundation;

#include "ONBUserRecommendationListSectionHeaderView.h"

@interface T1UserRecommendationListFollowAllSectionHeaderView : ONBUserRecommendationListSectionHeaderView

/* class methods */
+ (double)heightWithHeaderText:(id)text detailText:(id)text layoutMetrics:(id)metrics;
+ (Class)checkmarkControlClass;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;

@end

#endif /* T1UserRecommendationListFollowAllSectionHeaderView_h */
