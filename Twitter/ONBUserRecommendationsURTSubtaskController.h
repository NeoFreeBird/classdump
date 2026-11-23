//
#ifndef ONBUserRecommendationsURTSubtaskController_h
#define ONBUserRecommendationsURTSubtaskController_h
@import Foundation;

#include "ONBConditionalTextViewModel.h"
#include "ONBContainerSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"
#include "T1TimelineMessageEntryTableRowAdapterDelegate-Protocol.h"
#include "T1URTDataViewAdapterProvider-Protocol.h"
#include "T1URTOnboardingUserRecommendationsEndpointTransformerDelegate-Protocol.h"
#include "T1URTViewControllerLoadingDelegate-Protocol.h"
#include "T1UserFacepileWithActionFollowStateProvider-Protocol.h"
#include "T1UserOrRecommendationTableRowAdapterDelegate-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSString, OCFUserRecommendationsURTSubtask, OCFUserRecommendationsURTSubtaskState, T1URTOnboardingUserRecommendationsEndpointTransformer, UIViewController;
@protocol T1ProfileViewModel;

@interface ONBUserRecommendationsURTSubtaskController : ONBContainerSubtaskController <T1TimelineMessageEntryTableRowAdapterDelegate, T1UserFacepileWithActionFollowStateProvider, T1UserOrRecommendationTableRowAdapterDelegate, T1URTDataViewAdapterProvider, T1URTOnboardingUserRecommendationsEndpointTransformerDelegate, T1URTViewControllerLoadingDelegate> {
    /* instance variables */
    UIViewController *_modalProfileViewController;
    UIViewController *_presentedFollowSheet;
    id <ONBSubtaskControllerDelegate> _delegate;
    id <T1ProfileViewModel> _modalProfileViewModel;
    _Bool _didEncounterLoadingError;
    NSString *_flowToken;
    NSHashTable *_followStateProviderObservers;
    NSMapTable *_actionControlProvidersForUserIDMap;
    NSMutableArray *_selectedUsers;
    OCFUserRecommendationsURTSubtask *_subtask;
    OCFUserRecommendationsURTSubtaskState *_state;
    ONBConditionalTextViewModel *_detailConditionalText;
    T1URTOnboardingUserRecommendationsEndpointTransformer *_endpointTransformer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)dealloc;
- (id)detailRichText;
- (id)nextLink;
- (id)skipLink;
- (void)nextTapped;
- (id)generateContainedViewController;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)restartWithNavigationContext:(id)context navigationLink:(id)link;
- (id)subtaskData;
- (_Bool)requiresAccountToStart;
- (void)private_presentProfileModalFromController:(id)controller withUserReference:(id)reference sourceView:(id)view account:(id)account;
- (void)private_modalProfileViewModelDidInvalidate:(id)invalidate;
- (void)private_requestTweetRecommendationsForProfileViewController:(id)controller;
- (id)private_nextLinkLabelForSelectedCount:(long long)count;
- (id)private_detailRichText;
- (_Bool)private_setSelected:(_Bool)selected forProvidedButtonWithUserIDNumber:(id)idnumber scribeComponent:(id)component scribeItem:(id)item;
- (void)private_updateDetailRichText;
- (void)private_updateNextButton;
- (id)userDataViewAdapterForItemsOfClasses:(id)classes account:(id)account scribeImpressionCache:(id)cache cellStyle:(long long)style didSelectUserBlock:(id /* block */)block followActionBlock:(id /* block */)block caretTapBlock:(id /* block */)block caretTypeBlock:(id /* block */)block delegate:(id)delegate;
- (id)messageEntryDataViewAdapterForItemsOfClasses:(id)classes account:(id)account scribe:(id)scribe scribeContext:(id)context scribeImpressionCache:(id)cache impressionLogger:(id)logger navigationHelper:(id)helper delegate:(id)delegate;
- (void)timelineMessageEntryTableRowAdapter:(id)adapter dismissItem:(id)item;
- (void)timelineMessageEntryTableRowAdapter:(id)adapter dismissUsers:(id)users entryID:(id)id;
- (void)timelineMessageEntryTableRowAdapter:(id)adapter dismissEntryID:(id)id;
- (id)private_originalTimelineMessageAdapterDelegateForAdapter:(id)adapter;
- (void)urtViewController:(id)controller didLoadViewModels:(id)models;
- (id)userRowAdapter:(id)adapter actionControlProviderForDataViewController:(id)controller item:(id)item options:(id)options indexPath:(id)path;
- (id)private_baseScribeContext;
- (void)private_logAction:(id)action component:(id)component element:(id)element;
- (void)private_logAction:(id)action component:(id)component element:(id)element parameters:(id)parameters;
- (id)private_scribeComponentForViewController:(id)controller;
- (void)private_didSelectUserReference:(id)reference forItem:(id)item inController:(id)controller withOptions:(id)options usingAdapter:(id)adapter;
- (void)private_didDeselectUserReference:(id)reference forItem:(id)item inController:(id)controller;
- (_Bool)private_shouldSelectUserReference:(id)reference;
- (void)private_presentEmptyFollowingSheet;
- (void)private_presentFollowingSheetWithUsers:(id)users;
- (void)private_fetchUsersFromUserReferences:(id)references forAccount:(id)account completion:(id /* block */)completion;
- (void)didActivateNavigationLink:(id)link;
- (void)private_replacePresentedFollowSheetWithTray:(id)tray;
- (void)private_dismissFollowSheetThenActivateNoContentButtonLink;
- (id)onboardingUserRecommendationsEndpointTransformerSelectedUserIDs:(id)ids;
- (void)addFollowStateObserver:(id)observer;
- (void)startObservingUser:(id)user;
- (void)stopObservingUser:(id)user;
- (_Bool)isFollowingUser:(id)user;
- (void)setIsFollowing:(_Bool)following forUsers:(id)users;

@end

#endif /* ONBUserRecommendationsURTSubtaskController_h */
