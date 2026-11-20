//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVUserProfileModalViewController_h
#define PTVUserProfileModalViewController_h
@import Foundation;

#include "PTVBroadcastsFingFersDelegate-Protocol.h"
#include "PTVGuestCallerControllerObserver-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVMergeParticipantUser.h"
#include "PTVModalPresentationManagerDelegate-Protocol.h"
#include "PTVPaymanService.h"
#include "PTVUserIntersections.h"
#include "PTVUserModal-Protocol.h"
#include "PTVUserModalFollowshipChangeDelegate-Protocol.h"
#include "PTVUserProfileModalPageViewController.h"
#include "PTVUserProfileModalView.h"
#include "PTVUserProfilePagingDelegate-Protocol.h"
#include "PTVViewController.h"

@class NSObject, NSString;

@interface PTVUserProfileModalViewController : PTVViewController <PTVUserModalFollowshipChangeDelegate, PTVUserProfilePagingDelegate, PTVBroadcastsFingFersDelegate, PTVUserModal, PTVGuestCallerControllerObserver>

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) _Bool shouldLoadUser;
@property (readonly, nonatomic) PTVUserProfileModalView *profileView;
@property (readonly, nonatomic) long long allTimeStarsCount;
@property (readonly, nonatomic) PTVPaymanService *paymanService;
@property (retain, nonatomic) PTVUserIntersections *userIntersections;
@property (retain, nonatomic) PTVUserProfileModalPageViewController *broadcastsFollowingFollowersPageViewController;
@property (nonatomic) _Bool shouldRemainAtFullHeight;
@property (nonatomic) _Bool isReadOnly;
@property (nonatomic) _Bool shouldDisplayExpandedFocus;
@property (nonatomic) unsigned long long guestCallerState;
@property (weak, nonatomic) id <PTVModalPresentationManagerDelegate> modalPresentationDelegate;
@property (weak, nonatomic) id <PTVUserModalFollowshipChangeDelegate> followshipChangeDelegate;
@property (retain, nonatomic) PTVMergeParticipantUser *user;
@property (copy, nonatomic) NSString *hostViewName;
@property (retain, nonatomic) NSString *broadcastID;
@property (retain, nonatomic) NSString *followSource;
@property (nonatomic) _Bool presentedFromSuggestedFeed;
@property (nonatomic) _Bool isPresentingWhileBroadcasting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *broadcastCellClickThroughSource;
@property (nonatomic) _Bool initiallyShowFollowers;

/* instance methods */
- (id)initWithRemoteUserID:(id)id loggedInUser:(id)user modalDelegate:(id)delegate;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)load:(long long)load;
- (void)setData:(id)data;
- (_Bool)shouldLoad;
- (_Bool)hasData:(id)data;
- (void)updateUserView:(id)view;
- (void)setAcceptAsGuestDisplayStateIfNeededForGuestCallerState:(id)state;
- (void)userProfileModalViewDidPressSettingsButton;
- (void)userProfileModalViewDidPressWatchLiveButton;
- (void)userProfileModalViewDidPressFollowUnfollowButton;
- (void)userProfileModalViewDidPressMuteButton;
- (void)userProfileModalViewDidPressBroadcastHistoryButton;
- (void)userProfileModalViewDidPressFollowingButton;
- (void)userProfileModalViewDidPressFollowersButton;
- (void)updateProfileForTabPress:(unsigned long long)press;
- (void)userProfileModalViewDidPressAcceptAsGuestButton;
- (void)didTransitionPageToViewControllerAtIndex:(unsigned long long)index;
- (void)tableView:(id)view didScrollToYContentOffset:(double)offset scrollDirectionUp:(_Bool)up;
- (void)didSelectUserProfileWithUserID:(id)id;
- (void)didSelectBroadcastToLaunch:(id)launch withWatchContext:(id)context inCollection:(id)collection;
- (void)setWatchLiveBannerVisibile:(_Bool)visibile;
- (void)followStatusDidChange:(id)change isNowFollowing:(_Bool)following;
- (void)didToggleNotifications:(id)notifications;
- (void)didBlockUser:(id)user;
- (void)didUnblockUser:(id)user;
- (void)didCancelSelection;
- (void)broadcasterDidUpdateStateForGuestCallerSession:(id)session fromState:(unsigned long long)state;
- (long long)acceptAsGuestButtonStateForGuestCallerSession:(unsigned long long)session;
- (void)presentUserSettingsActionSheetFromFollow:(_Bool)follow;
- (void)repositionModalIfNeededForUpdatedUser:(id)user;
- (void)repositionModalIfNeeded;
- (void)setUserProfileViewButtonTargets;
- (void)showNotificationsTooltip;
- (unsigned long long)tfn_supportedInterfaceOrientations;

@end

#endif /* PTVUserProfileModalViewController_h */
