//
#ifndef PTVHangUpGuestCallViewController_h
#define PTVHangUpGuestCallViewController_h
@import Foundation;

#include "PTVCameraPreviewGuestCallViewController.h"
#include "PTVGuestCallButtonWithSubtitleTableViewCellDelegate-Protocol.h"
#include "PTVGuestCallerController.h"

@class NSString;
@protocol PTVHangUpGuestCallViewControllerDelegate;

@interface PTVHangUpGuestCallViewController : PTVCameraPreviewGuestCallViewController <PTVGuestCallButtonWithSubtitleTableViewCellDelegate> {
    /* instance variables */
    PTVHangUpGuestCallViewController *_weakSelf;
    id <PTVHangUpGuestCallViewControllerDelegate> _delegate;
    PTVGuestCallerController *_guestCallerController;
    NSString *_previousScreen;
    _Bool _didCompleteHangUp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)HangUpButtonTitle;
+ (id)HangUpSubtitle:(_Bool)subtitle;

/* instance methods */
- (void)dealloc;
- (void)viewDidLoad;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (void)guestCallButtonWithSubtitleTableViewCell:(id)cell didSelectButton:(id)button;
- (id)initWithGuestCallerController:(id)controller sharedVideoPreviewView:(id)view loggedInUser:(id)user watcher:(id)watcher delegate:(id)delegate previousScreen:(id)screen;

@end

#endif /* PTVHangUpGuestCallViewController_h */
