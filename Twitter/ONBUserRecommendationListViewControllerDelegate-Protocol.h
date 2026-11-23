//
#ifndef ONBUserRecommendationListViewControllerDelegate_Protocol_h
#define ONBUserRecommendationListViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBUserRecommendationListViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)fetchRecommendationsForUserRecommendationListViewController:(id)controller;
- (void)userRecommendationListViewControllerDidChangeUserSelection:(id)selection inView:(id)view didSelectCategory:(_Bool)category;

@optional

@end

#endif /* ONBUserRecommendationListViewControllerDelegate_Protocol_h */
