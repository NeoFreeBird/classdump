//
#ifndef T1NotificationsSecondRequestViewController_h
#define T1NotificationsSecondRequestViewController_h
@import Foundation;

@class UIViewController;

@interface T1NotificationsSecondRequestViewController : UIViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *loggedInScribe;
    NSNumber"16@0:8 *pushSettingsObserver;
    NSNumber"16@0:8 *$__lazy_storage_$_imagePipeline;
    NSNumber"16@0:8 *previewImageFetchOperation;
    NSNumber"16@0:8 *previewImageHeightConstraint;
    NSNumber"16@0:8 *$__lazy_storage_$_backButton;
    NSNumber"16@0:8 *$__lazy_storage_$_notificationIconView;
    NSNumber"16@0:8 *$__lazy_storage_$_titleLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_subtitleLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_phonePreviewImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_onlyImportantButton;
    NSNumber"16@0:8 *$__lazy_storage_$_enableNotificationsButton;
}

/* class methods */
+ (_Bool)wasDismissed;
+ (void)setWasDismissed:(_Bool)dismissed;
+ (_Bool)isEnabled;
+ (id)onboardingPromptViewControllerWithAccount:(id)account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)change;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)backButtonTapped;
- (void)onlyImportantButtonTapped;
- (void)enableNotificationsButtonTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1NotificationsSecondRequestViewController_h */
