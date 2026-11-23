//
#ifndef PTVSetupGuestCallViewController_h
#define PTVSetupGuestCallViewController_h
@import Foundation;

#include "PTVCameraPreviewGuestCallViewController.h"
#include "PTVConfirmGuestCallViewControllerDelegate-Protocol.h"
#include "PTVGuestCallInstructionsView.h"
#include "PTVGuestCallInstructionsViewDelegate-Protocol.h"
#include "PTVGuestCallNotifyFollowersView.h"
#include "PTVGuestCallNotifyFollowersViewDelegate-Protocol.h"
#include "PTVGuestCallPermissionsView.h"
#include "PTVGuestCallPermissionsViewDelegate-Protocol.h"
#include "PTVOverflowContentViewController-Protocol.h"
#include "PTVSetupGuestCallTableViewCellDelegate-Protocol.h"

@class NSString, UIButton;
@protocol PTVSetupGuestCallViewControllerDelegate;

@interface PTVSetupGuestCallViewController : PTVCameraPreviewGuestCallViewController <PTVSetupGuestCallTableViewCellDelegate, PTVGuestCallPermissionsViewDelegate, PTVOverflowContentViewController, PTVConfirmGuestCallViewControllerDelegate, PTVGuestCallInstructionsViewDelegate, PTVGuestCallNotifyFollowersViewDelegate> {
    /* instance variables */
    PTVSetupGuestCallViewController *_weakSelf;
    NSString *_previousScreen;
    _Bool _didCompleteSetup;
    _Bool _canNotifyFollowers;
    _Bool _shouldNotifyFollowers;
}

@property (weak, nonatomic) id <PTVSetupGuestCallViewControllerDelegate> delegate;
@property (retain, nonatomic) PTVGuestCallInstructionsView *instructionsView;
@property (retain, nonatomic) PTVGuestCallPermissionsView *permissionsView;
@property (retain, nonatomic) PTVGuestCallNotifyFollowersView *notifyFollowersView;
@property (retain, nonatomic) UIButton *askToJoinButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)InstructionsTitle;
+ (id)InstructionsAttributedSubtitle:(_Bool)subtitle;
+ (id)PermissionsTitle;
+ (id)MicrophonePermissionsAttributedSubtitle;
+ (id)CameraAndMicrophonePermissionsAttributedSubtitle;
+ (id)InstructionsSubtitleAttributes;
+ (id)InstructionsSubtitleDelimitedAttributes;
+ (id)InstructionsSubtitleFont;
+ (id)AskToJoinButtonFont;
+ (id)AskToJoinAttributedTitle;

/* instance methods */
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (_Bool)overflowContentViewControllerShouldDisplayDismissButton;
- (_Bool)overflowContentViewControllerShouldDisplayBackButton;
- (void)guestCallPermissionsView:(id)view didUpdateMode:(unsigned long long)mode;
- (void)guestCallPermissionsViewDidTapOnCameraButton:(id)button;
- (void)guestCallPermissionsViewDidTapOnMicrophoneButton:(id)button;
- (void)guestCallPermissionsViewDidCancel:(id)cancel;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (void)cameraSetupDidComplete;
- (void)tableViewCell:(id)cell didSetupGuestCallWithAudioOnly:(_Bool)only;
- (void)setupGuestCallWithAudioOnly:(_Bool)only;
- (void)reportSetupCompletionToDelegateWithAudioOnly:(_Bool)only;
- (void)confirmGuestCallViewControllerDidPressConfirmButton:(id)button isFirstConfirmation:(_Bool)confirmation isAudioOnly:(_Bool)only;
- (void)guestCallInstructionsViewDidTapOnSubtitleLabel:(id)label;
- (void)notifyFollowersView:(id)view didChangeShouldNotifyFollowers:(_Bool)followers;
- (void)didSelectAskToJoinButton;
- (id)askToJoinButtonImage;
- (double)heightForAskToJoinButton;
- (id)initWithDelegate:(id)delegate watcher:(id)watcher sharedVideoPreviewView:(id)view loggedInUser:(id)user previousScreen:(id)screen canNotifyFollowers:(_Bool)followers shouldNotifyFollowers:(_Bool)followers;
- (void)trackSetupScreenAnalytics;
- (_Bool)isNotifyFollowersEnabled;

@end

#endif /* PTVSetupGuestCallViewController_h */
