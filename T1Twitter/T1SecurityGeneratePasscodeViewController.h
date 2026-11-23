//
#ifndef T1SecurityGeneratePasscodeViewController_h
#define T1SecurityGeneratePasscodeViewController_h
@import Foundation;

#include "T1SecurityGeneratePasscodeView.h"
#include "T1SecurityGeneratePasscodeViewDelegate-Protocol.h"

@class NSString, TFNTwitterAccount, TFNViewController;

@interface T1SecurityGeneratePasscodeViewController : TFNViewController <T1SecurityGeneratePasscodeViewDelegate>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1SecurityGeneratePasscodeView *passcodeView;
@property (copy, nonatomic) NSString *presetBackupCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithAccount:(id)account backupCode:(id)code;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidFullyAppear:(_Bool)appear;
- (void)_t1_refresh;
- (void)_t1_updateLoginVerificationStatus;
- (void)_saveScreenshot:(id)screenshot;
- (void)_generateBackupCode;
- (void)_captureScreenshot;
- (void)_loadBackupCode:(_Bool)code;
- (void)generatePasscodeView:(id)view didTapGenerateButton:(id)button;
- (void)generatePasscodeView:(id)view didTapScreenshotButton:(id)button;
- (void)generatePasscodeView:(id)view didTapLearnMoreButton:(id)button;

@end

#endif /* T1SecurityGeneratePasscodeViewController_h */
