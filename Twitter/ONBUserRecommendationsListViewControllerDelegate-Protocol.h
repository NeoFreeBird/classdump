//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBUserRecommendationsListViewControllerDelegate_Protocol_h
#define ONBUserRecommendationsListViewControllerDelegate_Protocol_h
@import Foundation;

#include "ONBUserRecommendationListViewControllerDelegate-Protocol.h"

@protocol ONBUserRecommendationsListViewControllerDelegate <ONBUserRecommendationListViewControllerDelegate>

@required

/* required instance methods */
- (void)userRecommendationsListViewControllerDidTapSkip:(id)skip;
- (void)userRecommendationsListViewController:(id)controller didTapNextWithUserIDs:(id)ids;
- (id)nextLabelForUserRecommendationsListViewController:(id)controller enabled:(_Bool)enabled;

@optional

@end

#endif /* ONBUserRecommendationsListViewControllerDelegate_Protocol_h */
