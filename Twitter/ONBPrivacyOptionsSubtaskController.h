//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBPrivacyOptionsSubtaskController_h
#define ONBPrivacyOptionsSubtaskController_h
@import Foundation;

#include "ONBDiscoverabilityOptionsProvider-Protocol.h"
#include "ONBDiscoverabilityOptionsViewController.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFExpandedRichText, OCFPrivacyOptionsSubtask, OCFPrivacyOptionsSubtaskState;

@interface ONBPrivacyOptionsSubtaskController : ONBSubtaskController <ONBDiscoverabilityOptionsProvider> {
    /* instance variables */
    OCFPrivacyOptionsSubtask *_subtask;
    OCFPrivacyOptionsSubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
    ONBDiscoverabilityOptionsViewController *_viewController;
    OCFExpandedRichText *_expandedDiscoverableByEmailDetailText;
    OCFExpandedRichText *_expandedDiscoverableByPhoneDetailText;
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
- (id)expandedDiscoverableByEmailDetailText;
- (id)expandedDiscoverableByPhoneDetailText;
- (id /* block */)discoverabilityDoneButtonAction;
- (id)discoverabilityDoneButtonLabel;
- (_Bool)discoverableByEmail;
- (_Bool)discoverableByPhone;
- (void)setDiscoverableByEmail:(_Bool)email completionBlock:(id /* block */)block;
- (void)setDiscoverableByPhone:(_Bool)phone completionBlock:(id /* block */)block;
- (id)discoverabilityOptionsTitle;
- (id)discoverabilitySectionLabel;
- (id)discoverableByEmailLabel;
- (id)discoverableByPhoneLabel;
- (id)discoverableByEmailDescriptionText;
- (id)discoverableByEmailDescriptionCallsToAction;
- (id)discoverableByPhoneDescriptionText;
- (id)discoverableByPhoneDescriptionCallsToAction;
- (id)private_settingsDescriptionItemCallsToActionForEntities:(id)entities;

@end

#endif /* ONBPrivacyOptionsSubtaskController_h */
