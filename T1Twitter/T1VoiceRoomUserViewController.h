//
#ifndef T1VoiceRoomUserViewController_h
#define T1VoiceRoomUserViewController_h
@import Foundation;

#include "T1UserOrRecommendationTableRowAdapter.h"
#include "T1VoiceRoomCohostInviteViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomUserPrivateEmojisView.h"
#include "T1VoiceRoomUserPrivateEmojisViewDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"
#include "TASUserActionsHandler-Protocol.h"
#include "TASUserModel-Protocol.h"
#include "TFNMenuSheetActionAdapterDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"

@class NSString, TFNItemsDataViewController, TFNTwitterUser, TFNViewDataViewAdapter;

@interface T1VoiceRoomUserViewController : TFNItemsDataViewController <TFNMenuSheetActionAdapterDelegate, T1VoiceRoomUserPrivateEmojisViewDelegate, TFNToasterContextDelegate, T1VoiceRoomCohostInviteViewControllerDelegate, TASUserActionsHandler, TFNModalSheetViewControllerLayoutDelegate>

@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (retain, nonatomic) id <TASUserModel> userModel;
@property (retain, nonatomic) TFNTwitterUser *user;
@property (retain, nonatomic) T1UserOrRecommendationTableRowAdapter *userViewAdapter;
@property (retain, nonatomic) T1VoiceRoomUserPrivateEmojisView *emojisView;
@property (retain, nonatomic) TFNViewDataViewAdapter *emojisViewAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSpaceModel:(id)model userModel:(id)model;
- (id)initWithSpaceModel:(id)model canonicalUser:(id)user;
- (void)viewDidLoad;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)update:(_Bool)update;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)voiceRoomUserPrivateEmojisView:(id)view didTapEmoji:(id)emoji;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)menuActionSheetAdapter:(id)adapter didSelectActionItem:(id)item atIndexPath:(id)path;
- (id)_t1_actionItems;
- (void)_t1_presentProfile;
- (void)_t1_sendDM;
- (void)handleUserActionSwitchToListeningWithUser:(id)user;
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
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (void)_t1_logClickActionOnElement:(id)element inComponent:(id)component;
- (id)scribePageForToaster:(id)toaster;
- (void)cohostInviteViewController:(id)controller didConfirmInviteForUsers:(id)users;
- (void)cohostInviteViewController:(id)controller didCancelInviteForUsers:(id)users;

@end

#endif /* T1VoiceRoomUserViewController_h */
