//
#ifndef ONBUserRecommendationsListSubtaskController_h
#define ONBUserRecommendationsListSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"
#include "ONBUserRecommendationsListViewController.h"
#include "ONBUserRecommendationsListViewControllerDelegate-Protocol.h"

@class NSString, OCFUserRecommendationsListSubtask, OCFUserRecommendationsListSubtaskState;

@interface ONBUserRecommendationsListSubtaskController : ONBSubtaskController <ONBUserRecommendationsListViewControllerDelegate> {
    /* instance variables */
    OCFUserRecommendationsListSubtask *_subtask;
    OCFUserRecommendationsListSubtaskState *_state;
    NSString *_flowToken;
    id <ONBSubtaskControllerDelegate> _delegate;
    ONBUserRecommendationsListViewController *_viewController;
}

@property (nonatomic) _Bool isCurrentlyFetchingUserRecommendations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (id)subtaskData;
- (_Bool)requiresAccountToStart;
- (void)private_fetchUserRecommendationsWithFollows:(id)follows followedGroupIDs:(id)ids unfollowedGroupIDs:(id)ids responseBlock:(id /* block */)block;
- (id)private_locationStringForFetchUserRecommendationsLocation;
- (id)private_recommendationGroupForOCFRecommendationGroup:(id)group;
- (id)private_recommendationGroupForOCFRecommendationGroup:(id)group debugSubtitleText:(id)text;
- (id)private_scribeItemDescription;
- (void)fetchRecommendationsForUserRecommendationListViewController:(id)controller;
- (void)userRecommendationListViewControllerDidChangeUserSelection:(id)selection inView:(id)view didSelectCategory:(_Bool)category;
- (void)userRecommendationsListViewController:(id)controller didTapNextWithUserIDs:(id)ids;
- (void)userRecommendationsListViewControllerDidTapSkip:(id)skip;
- (id)nextLabelForUserRecommendationsListViewController:(id)controller enabled:(_Bool)enabled;

@end

#endif /* ONBUserRecommendationsListSubtaskController_h */
