//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomGuestsViewController_h
#define T1VoiceRoomGuestsViewController_h
@import Foundation;

#include "T1UserOrRecommendationTableRowAdapter.h"
#include "T1VoiceRoomCohostInviteViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomGuestsActionControlProvider.h"
#include "T1VoiceRoomGuestsActionControlProviderDelegate-Protocol.h"
#include "T1VoiceRoomGuestsHeaderView.h"
#include "T1VoiceRoomGuestsHeaderViewDelegate-Protocol.h"
#include "T1VoiceRoomGuestsItemAdapter.h"
#include "T1VoiceRoomGuestsSegmentButton.h"
#include "T1VoiceRoomLegacyItemsDataViewController.h"
#include "T1VoiceRoomSelectUsersViewControllerDelegate-Protocol.h"
#include "TASUserActionsHandler-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"

@class NSArray, NSString, TFNDataViewItem;

@interface T1VoiceRoomGuestsViewController : T1VoiceRoomLegacyItemsDataViewController <T1VoiceRoomGuestsActionControlProviderDelegate, T1VoiceRoomSelectUsersViewControllerDelegate, T1VoiceRoomCohostInviteViewControllerDelegate, T1VoiceRoomGuestsHeaderViewDelegate, TASUserActionsHandler, TFNModalSheetViewControllerLayoutDelegate>

@property (nonatomic) double preferredHeight;
@property (retain, nonatomic) T1VoiceRoomGuestsActionControlProvider *actionControlProvider;
@property (retain, nonatomic) NSArray *sectionsSelectionButtons;
@property (retain, nonatomic) T1VoiceRoomGuestsSegmentButton *requestsButton;
@property (retain, nonatomic) T1VoiceRoomGuestsHeaderView *headerView;
@property (retain, nonatomic) T1VoiceRoomGuestsItemAdapter *userViewAdapter;
@property (retain, nonatomic) T1UserOrRecommendationTableRowAdapter *removedUserViewAdapter;
@property (nonatomic) unsigned long long numberOfOpenAdminSpots;
@property (nonatomic) unsigned long long numberOfOpenSpeakerSpots;
@property (nonatomic) unsigned long long numberOfPendingSpeakers;
@property (retain, nonatomic) TFNDataViewItem *inviteAdminsDataViewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSpaceModel:(id)model;
- (id)initWithSpaceModel:(id)model filters:(unsigned long long)filters;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)_t1_presentInviteAdminsWithSelectedUsers:(id)users;
- (void)_t1_presentInviteSpeakers;
- (void)_t1_selectSegmentButton:(id)button;
- (void)_t1_updateSelectedGuestsFilter:(unsigned long long)filter;
- (id)_t1_activeTextItemWithNumberOfListeners:(unsigned long long)listeners;
- (void)_t1_presentNewWebViewWithURL:(id)url;
- (void)_t1_addIndicatorViewToButton:(id)button;
- (void)voiceRoomGuestsActionControlProvider:(id)provider didTapOnUserWithUserReference:(id)reference onActionControl:(id)control withAction:(long long)action;
- (_Bool)voiceRoomGuestsActionControlProviderCanAddUserAsSpeaker:(id)speaker;
- (void)_t1_showMenuOnActionControl:(id)control;
- (void)_t1_showDenylistMenuOnActionControl:(id)control;
- (void)_t1_muteUser:(id)user;
- (void)handleUserActionInviteAsAdminWithUser:(id)user;
- (void)handleUserActionCancelAsAdminWithUser:(id)user;
- (void)handleUserActionRemoveAsAdminWithUser:(id)user;
- (void)handleUserActionAddAsSpeakerWithUser:(id)user;
- (void)handleUserActionRemoveFromSpeakersWithUser:(id)user;
- (void)handleUserActionInviteAsSpeakerWithUser:(id)user;
- (void)handleUserActionMuteSpeakerWithUser:(id)user;
- (void)handleUserActionAddToDenylistWithUser:(id)user;
- (void)handleUserActionRemoveFromDenylistWithUser:(id)user;
- (void)handleUserActionBlockWithUser:(id)user withAddToDenylist:(_Bool)denylist;
- (void)handleUserActionUnblockWithUser:(id)user;
- (void)handleUserActionReportWithUser:(id)user withAddToDenylist:(_Bool)denylist;
- (void)handleUserActionSwitchToListeningWithUser:(id)user;
- (void)voiceRoomSelectUsersViewController:(id)controller didSelectUsers:(id)users;
- (_Bool)voiceRoomSelectUsersViewController:(id)controller canSelectUser:(id)user;
- (unsigned long long)voiceRoomSelectUsersViewControllerOpenSpots:(id)spots;
- (void)cohostInviteViewController:(id)controller didConfirmInviteForUsers:(id)users;
- (void)cohostInviteViewController:(id)controller didCancelInviteForUsers:(id)users;
- (void)guestsHeaderViewDidTapDismiss:(id)dismiss;
- (void)guestsHeaderViewDidBeginSearch:(id)search;
- (void)guestsHeaderViewDidUpdateSearch:(id)search;
- (void)guestsHeaderViewDidEndSearch:(id)search;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)scribeSection;

@end

#endif /* T1VoiceRoomGuestsViewController_h */
