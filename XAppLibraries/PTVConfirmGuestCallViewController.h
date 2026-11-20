//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVConfirmGuestCallViewController_h
#define PTVConfirmGuestCallViewController_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVBroadcastOverflowTableViewController.h"
#include "PTVConfirmGuestCallViewControllerDelegate-Protocol.h"
#include "PTVGuestCallButtonWithSubtitleTableViewCellDelegate-Protocol.h"
#include "PTVGuestCallInstructionsView.h"
#include "PTVOverflowContentViewController-Protocol.h"

@class NSString;

@interface PTVConfirmGuestCallViewController : PTVBroadcastOverflowTableViewController <PTVGuestCallButtonWithSubtitleTableViewCellDelegate, PTVOverflowContentViewController> {
    /* instance variables */
    id <PTVConfirmGuestCallViewControllerDelegate> _delegate;
    PTVBroadcast *_broadcast;
    _Bool _isFirstConfirmation;
    _Bool _isAudioOnly;
    PTVGuestCallInstructionsView *_instructionsView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)InstructionsTitle;
+ (id)InstructionsAttributedSubtitleWithDisplayName:(id)name;
+ (id)InstructionsSubtitleAttributes;
+ (id)InstructionsSubtitleFont;
+ (id)ConfirmButtonTitle:(_Bool)title;

/* instance methods */
- (void)viewDidLoad;
- (_Bool)overflowContentViewControllerShouldDisplayDismissButton;
- (_Bool)overflowContentViewControllerShouldDisplayBackButton;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (void)guestCallButtonWithSubtitleTableViewCell:(id)cell didSelectButton:(id)button;
- (id)initWithBroadcast:(id)broadcast delegate:(id)delegate isFirstConfirmation:(_Bool)confirmation isAudioOnly:(_Bool)only;

@end

#endif /* PTVConfirmGuestCallViewController_h */
