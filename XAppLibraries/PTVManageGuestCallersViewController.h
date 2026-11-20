//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVManageGuestCallersViewController_h
#define PTVManageGuestCallersViewController_h
@import Foundation;

#include "PTVBroadcastOverflowCollectionViewController.h"
#include "PTVGuestCallInstructionsView.h"
#include "PTVGuestCallerController.h"
#include "PTVGuestCallerControllerObserver-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVManageGuestCallersActionsCollectionViewCellDelegate-Protocol.h"
#include "PTVManageGuestCallersCollectionViewCellDelegate-Protocol.h"
#include "PTVManageGuestCallersEmptyStateCollectionViewCellDelegate-Protocol.h"
#include "PTVManageGuestCallersViewControllerDelegate-Protocol.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface PTVManageGuestCallersViewController : PTVBroadcastOverflowCollectionViewController <PTVManageGuestCallersActionsCollectionViewCellDelegate, PTVManageGuestCallersEmptyStateCollectionViewCellDelegate, PTVManageGuestCallersCollectionViewCellDelegate, PTVGuestCallerControllerObserver, PTVWorkClientDelegate> {
    /* instance variables */
    PTVManageGuestCallersViewController *_weakSelf;
    id <PTVManageGuestCallersViewControllerDelegate> _delegate;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    PTVWorkClient *_workClient;
    PTVGuestCallInstructionsView *_instructionsView;
}

@property (retain, nonatomic) NSMutableArray *guestCallersArray;
@property (retain, nonatomic) PTVGuestCallerController *guestCallersController;
@property (retain, nonatomic) NSMutableDictionary *lastKnownGuestCallerSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)InstructionsTitle;
+ (id)InstructionsSubtitle;

/* instance methods */
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)traitCollectionDidChange:(id)change;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (unsigned long long)guestCallersSectionForCollectionViewSection:(long long)section;
- (unsigned long long)collectionViewSectionForGuestCallersSection:(unsigned long long)section;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)configureCallerCell:(id)cell guestCaller:(id)caller callerSession:(id)session;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(long long)index;
- (void)actionsCellDidSelectDisableCallIns:(id)ins;
- (void)actionsCellDidSelectRequestCallIns:(id)ins;
- (void)emptyCellDidSelectRequestCallIns:(id)ins;
- (void)guestCallerCellDidSelectProfileImage:(id)image;
- (void)guestCallerCell:(id)cell didSelectAddGuestButton:(id)button;
- (void)guestCallerCell:(id)cell addGuestButtonDidCompleteCountdown:(id)countdown;
- (void)broadcasterDidUpdateStateForGuestCallerSession:(id)session fromState:(unsigned long long)state;
- (void)broadcasterDidUpdateGuestCallerSessionsDisabledState:(_Bool)state;
- (void)broadcasterDidReceiveErrorUpdatingDisableCallIns;
- (void)didUpdateAudioLevel:(id)level forUserId:(id)id;
- (void)reloadActionsAndEmptyCells;
- (id)initWithGuestCallersController:(id)controller loggedInUser:(id)user delegate:(id)delegate;
- (_Bool)shouldDisplayRequestCallersButtonInActionRow;
- (_Bool)hasAnyGuestCallers;
- (id)guestCallerForGuestCallerCell:(id)cell;
- (id)guestCallerCellForGuestCallerID:(id)id;
- (double)widthForGuestCallerCell;
- (void)presentActionSheetForFromGuestCallerCell:(id)cell;
- (void)presentProfileForGuestCaller:(id)caller;
- (void)setGuestCallerSessionState:(unsigned long long)state forGuestCaller:(id)caller;
- (void)blockGuestCaller:(id)caller;
- (void)hangUpOnGuestCaller:(id)caller;

@end

#endif /* PTVManageGuestCallersViewController_h */
