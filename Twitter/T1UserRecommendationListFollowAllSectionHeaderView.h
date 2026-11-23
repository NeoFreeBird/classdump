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
