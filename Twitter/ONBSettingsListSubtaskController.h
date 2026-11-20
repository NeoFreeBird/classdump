//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSettingsListSubtaskController_h
#define ONBSettingsListSubtaskController_h
@import Foundation;

#include "OCFWaitable-Protocol.h"
#include "ONBLanguageSelectorTrayContentController.h"
#include "ONBSettingsListViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFSettingsListSubtask, OCFSettingsListSubtaskState, UIViewController;

@interface ONBSettingsListSubtaskController : ONBSubtaskController <ONBSettingsListViewControllerDelegate, OCFWaitable> {
    /* instance variables */
    OCFSettingsListSubtask *_subtask;
    OCFSettingsListSubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
    ONBLanguageSelectorTrayContentController *_languageSelectorContent;
    UIViewController *_settingsListViewController;
    _Bool _didCancelLanguageSelector;
    _Bool _didSubmitLanguageSelector;
    _Bool _didFallBackToSettingsList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)private_pushSettingsList;
- (void)settingsListViewController:(id)controller didTapNextWithSettings:(id)settings;
- (void)settingsListViewControllerDidTapSkip:(id)skip;
- (void)settingsListViewController:(id)controller didUpdateSettings:(id)settings;
- (_Bool)private_presentLanguageSelectorTray;
- (void)private_languageSelectorDidChangeSettings:(id)settings;
- (void)private_submitLanguageSelector:(id)selector skipped:(_Bool)skipped;
- (void)private_cancelLanguageSelectorFlow;
- (id)private_settingsListWaitable;
- (_Bool)canWaitWithMessage:(id)message;
- (void)waitWithMessage:(id)message;
- (void)stopWaiting;

@end

#endif /* ONBSettingsListSubtaskController_h */
