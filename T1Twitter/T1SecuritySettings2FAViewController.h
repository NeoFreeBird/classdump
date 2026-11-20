//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SecuritySettings2FAViewController_h
#define T1SecuritySettings2FAViewController_h
@import Foundation;

#include "T1EnableTotpTwoFactorFlow.h"
#include "T1SecuritySettings2FAEnrollmentHelper.h"
#include "T1SettingsAuthorizationInstructionsAdapterDelegate-Protocol.h"
#include "T1SettingsOnboardingFlowPresenter.h"

@class NSString, TFNBooleanItem, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1SecuritySettings2FAViewController : TFNItemsDataViewController <T1SettingsAuthorizationInstructionsAdapterDelegate> {
    /* instance variables */
    _Bool _isSMS2faEnabled;
    _Bool _isTOTPGeneratorEnabled;
}

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFNBooleanItem *loginVerificationEnabledItem;
@property (nonatomic) _Bool hasFetchedAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) T1SecuritySettings2FAEnrollmentHelper *helper;
@property (retain, nonatomic) T1SettingsOnboardingFlowPresenter *settingsOnboardingFlowPresenter;
@property (retain, nonatomic) T1EnableTotpTwoFactorFlow *enableTotpTwoFactorFlow;
@property (copy, nonatomic) id /* block */ didUpdatePhoneNumberCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)manageSecurityKeysViewControllerWithAccount:(id)account;
+ (id)loginRequestsViewControllerWithAccount:(id)account;
+ (id)loginCodeGeneratorViewControllerWithAccount:(id)account;
+ (id)temporaryPasswordViewControllerWithAccount:(id)account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)loadView;
- (void)viewWillAppear:(_Bool)appear;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)_t1_refresh;
- (void)_t1_updateLoginVerificationStatus;
- (void)_scribeWithSuccess:(_Bool)success error:(id)error;
- (void)_t1_updateSections;
- (void)_t1_legacy_updateSections;
- (void)_t1_updateSectionsShowing2faWithoutPhone;
- (id)_t1_loginVerificationMethodsSection;
- (id)_t1_loginVerificationAdditionalMethodsSection;
- (id)_t1_loginVerificationItemWithValue:(_Bool)value;
- (void)_t1_populateLoginVerificationMethodItemsIntoSection:(id)section methodType:(long long)type;
- (void)_t1_populateU2FMethodItemsIntoSection:(id)section;
- (id)_t1_loginVerificationMethodItemsTitleForType:(long long)type;
- (id)_t1_loginVerificationMethodItemsDescriptionForType:(long long)type;
- (id)_t1_generatePasscodeItem;
- (id)_t1_temporaryPasswordItem;
- (id)_t1_totpCodeGeneratorItem;
- (id)_t1_viewLoginRequestsItem;
- (id)_t1_descriptionItem;
- (id)_t1_notificationInstructionsItem;
- (id)_t1_notificationInstructionsHeaderItem;
- (_Bool)_t1_showLoginVerificationEnabled;
- (void)_t1_scribeResultForEnroll:(_Bool)enroll withSuccess:(_Bool)success forStep:(long long)step;
- (void)_t1_scribeModifyLoginVerification;
- (void)_scribeRateLimitForError:(id)error withComponent:(id)component;
- (void)_t1_changeLoginVerificationEnrollmentStatus;
- (void)_t1_displayU2FPromptIfRequiredForMethodType:(long long)type;
- (_Bool)_t1_canEnableMethodType:(long long)type disabledMethodType:(long long)type account:(id)account;
- (void)_t1_presentTwoFactorAuthSmsUpsell;
- (void)_t1_changeLoginVerificationMethodStatusWithEnabled:(_Bool)enabled methodType:(long long)type method:(id)method toggleItem:(id)item;
- (void)_t1_unenroll2faForMethodType:(long long)type completion:(id /* block */)completion;
- (void)_t1_unenrollU2FKeysWithCompletionBlock:(id /* block */)block;
- (void)_t1_enrollLoginVerification;
- (void)_t1_unenrollLoginVerification;
- (void)_t1_promptToModifyLoginVerification;
- (void)_t1_showAlertForError:(id)error dismissWhenCancel:(_Bool)cancel;
- (void)_t1_showGenericServerErrorToast;
- (void)authorizationInstructionsAdapterDidOpenSettings:(id)settings;

@end

#endif /* T1SecuritySettings2FAViewController_h */
