//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OnboardingUserFacepileViewModel_h
#define T1OnboardingUserFacepileViewModel_h
@import Foundation;

#include "T1UserFacepileViewProvider-Protocol.h"
#include "T1UserFacepileWithActionFollowStateProvider-Protocol.h"
#include "T1UserFacepileWithActionFollowStateProviderObserver-Protocol.h"
#include "T1UserFacepileWithActionViewModel-Protocol.h"
#include "T1UserFacepileWithActionViewModelDelegate-Protocol.h"

@class NSArray, NSHashTable, NSObject, NSString, TFNTwitterAccount, TFSTwitterScribeContext, UIViewController;
@protocol TwitterTimelineMessageTextAction;

@interface T1OnboardingUserFacepileViewModel : NSObject <T1UserFacepileWithActionFollowStateProviderObserver, T1UserFacepileWithActionViewModel>

@property (readonly, nonatomic) NSArray *featuredUsers;
@property (readonly, nonatomic) NSObject<T1UserFacepileViewProvider> *viewProvider;
@property (readonly, nonatomic) id <TwitterTimelineMessageTextAction> action;
@property (readonly, nonatomic) _Bool buttonStateNeedsUpdate;
@property (readonly, nonatomic) _Bool displaysFeaturingText;
@property (readonly, nonatomic) _Bool shouldAlwaysToggleActionButton;
@property (retain, nonatomic) id <T1UserFacepileWithActionFollowStateProvider> followStateProvider;
@property (readonly, copy, nonatomic) NSString *followedUserDisplayName;
@property (weak, nonatomic) UIViewController *expandedViewController;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) _Bool disableExperimentalBonusFollowsFeatures;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) NSArray *users;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) long long buttonStyle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *entryID;
@property (readonly, nonatomic) _Bool isButtonSelected;
@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (weak, nonatomic) NSObject<T1UserFacepileWithActionViewModelDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)private_makeDefinitiveUsers:(id)users withCurrentAccount:(id)account;

/* instance methods */
- (id)initWithAccount:(id)account users:(id)users featuredUsers:(id)users viewProvider:(id)provider followStateProvider:(id)provider action:(id)action actionType:(long long)type displayType:(long long)type buttonStyle:(long long)style scribeContext:(id)context entryID:(id)id displaysFeaturingText:(_Bool)text followedUserDisplayName:(id)name;
- (void)registerObserver:(id)observer;
- (id)featuringText;
- (id)private_followedUserFeaturingText;
- (id)private_featuringText;
- (id)facepileAccessibilityLabelText;
- (id)avatarViewModels;
- (id)buttonTitle;
- (id)selectedButtonTitle;
- (void)handleActionButtonPress;
- (void)handleFacepileTap;
- (void)handleUserSelected:(id)selected;
- (void)handleDismissUser:(id)user;
- (void)userStateProvider:(id)provider didFollowUserID:(id)id;
- (void)userStateProvider:(id)provider didUnfollowUserID:(id)id;
- (void)private_broadcastItemRemovalAtIndex:(unsigned long long)index;
- (void)private_broadcastActionButtonChanged;
- (void)private_broadcastDismissedAllItems;
- (void)private_handleFollowUnfollowAllAction;
- (void)private_dismissFacepileAfterRemovingAllUsers;
- (void)private_setupDataSourceListenersForUsers;
- (void)private_setNeedButtonStateUpdate;
- (_Bool)private_shouldButtonBeSelected;
- (id)private_usersFollowedByCurrentAccount:(_Bool)account;

@end

#endif /* T1OnboardingUserFacepileViewModel_h */
