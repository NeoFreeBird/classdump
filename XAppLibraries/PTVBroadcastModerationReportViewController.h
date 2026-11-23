//
#ifndef PTVBroadcastModerationReportViewController_h
#define PTVBroadcastModerationReportViewController_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVBroadcastModerationReportTableViewController.h"
#include "PTVBroadcastModerationReportTableViewControllerDelegate-Protocol.h"
#include "PTVBroadcastModerationReportViewControllerDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVOverflowContentViewController-Protocol.h"
#include "PTVRoundedButton.h"
#include "PTVViewController.h"
#include "PTVWorkClientWithCompletion.h"

@class NSObject, UIView;

@interface PTVBroadcastModerationReportViewController : PTVViewController <PTVOverflowContentViewController, PTVBroadcastModerationReportTableViewControllerDelegate> {
    /* instance variables */
    PTVWorkClientWithCompletion *_workClientModerationReport;
    UIView *_buttonContainer;
    PTVRoundedButton *_blockButton;
}

@property (readonly, nonatomic) PTVBroadcastModerationReportTableViewController *tableViewController;
@property (readonly, nonatomic) PTVBroadcast *broadcast;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (weak, nonatomic) id <PTVBroadcastModerationReportViewControllerDelegate> delegate;

/* instance methods */
- (id)initWithBroadcast:(id)broadcast loggedInUser:(id)user;
- (void)viewDidLoad;
- (void)blockButtonPressed:(id)pressed;
- (void)_blockAllSelected;
- (void)_bulkBlockChunkOfUsers:(id)users;
- (void)_reload;
- (void)presentBlockConfirmActionSheet;
- (void)moderationReportTableViewController:(id)controller didUpdateWithCount:(unsigned long long)count;
- (void)moderationReportTableViewController:(id)controller didSelectUser:(id)user;
- (void)moderationReportTableViewControllerSelectionDidChange:(id)change;
- (void)moderationReportTableViewControllerPresentGroupSettings:(id)settings;
- (void)moderationReportTableViewControllerDidSelectShowBlockedUsers:(id)users;
- (_Bool)moderationReportTableViewControllerCanPresentGroupSettings:(id)settings;

@end

#endif /* PTVBroadcastModerationReportViewController_h */
