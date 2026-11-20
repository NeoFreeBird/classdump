//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BootViewController_h
#define BootViewController_h
@import Foundation;

@class UIViewController;

@interface BootViewController : UIViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *notificationAuthorizationService;
    NSNumber"16@0:8 *notificationsPermissionPrompt;
    NSNumber"16@0:8 *signedOutCompletion;
    NSNumber"16@0:8 *signedInCompletion;
    NSNumber"16@0:8 *compactLogoPositionConstraint;
}

@property (nonatomic, readonly) _Bool prefersStatusBarHidden;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithSignedOutCompletion:(id /* block */)completion signedInCompletion:(id /* block */)completion;
- (void)viewDidLoad;
- (void)applicationDidBecomeActiveWithPendingPermission;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* BootViewController_h */
