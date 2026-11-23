//
#ifndef GADDebugOptionsViewController_h
#define GADDebugOptionsViewController_h
@import Foundation;

#include "GADAdContent.h"
#include "GADEventContext.h"

@class NSString, NSURL, UIButton, UIViewController;
@protocol GADDebugOptionsViewControllerDelegate;

@interface GADDebugOptionsViewController : UIViewController {
    /* instance variables */
    GADAdContent *_ad;
    GADEventContext *_context;
    NSString *_adDebugDialogString;
    NSURL *_debugDeviceLinkingURL;
    UIButton *_closeButton;
    _Bool _debugSignalStatusFetchInProgress;
    _Bool _inAppPreviewTokenFetchInProgress;
    NSString *_adUnitID;
    _Bool _shouldEnableInAppPreview;
    _Bool _shouldEnableDebugSignal;
}

@property (weak, nonatomic) id <GADDebugOptionsViewControllerDelegate> delegate;

/* class methods */
+ (id)debugOptionsViewControllerWithAdUnitID:(id)id;

/* instance methods */
- (id)initWithAd:(id)ad adUnitID:(id)id debugDialogString:(id)string;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)updateConfigurationFromSettings;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)presentDebugOptionsViewController;
- (void)handlePresentAdInspector;
- (void)presentAdInspectorSettingsViewController;
- (void)showCreativeInformationAlertView;
- (void)showFeatureNotEnabledAlertView;
- (id)debugDeviceQueryParameters;
- (id)debugURLRequestForString:(id)string;
- (void)linkDevice;
- (void)createDeviceIdentifierAndlinkDevice;
- (void)linkDebugSignal;
- (void)linkInAppPreview;
- (void)inAppPreviewSignalStatusReceivedResponse:(id)response data:(id)data;
- (void)showSystemErrorAlertView;
- (void)showAlertViewControllerWithTitle:(id)title;
- (void)finishedDebugFlow;
- (void)closeButtonPressed:(id)pressed;

@end

#endif /* GADDebugOptionsViewController_h */
