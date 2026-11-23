//
#ifndef ONBEnterPhoneSubtaskController_h
#define ONBEnterPhoneSubtaskController_h
@import Foundation;

#include "ONBEnterPhoneViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFEnterPhoneSubtask, OCFEnterPhoneSubtaskState;

@interface ONBEnterPhoneSubtaskController : ONBSubtaskController <ONBEnterPhoneViewControllerDelegate> {
    /* instance variables */
    OCFEnterPhoneSubtask *_subtask;
    OCFEnterPhoneSubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
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
- (id)subtaskData;
- (void)enterPhoneViewControllerDidTapSkip:(id)skip;
- (void)enterPhoneViewController:(id)controller didTapNextWithPhoneNumber:(id)number countryCode:(id)code settings:(id)settings discoverabilitySettingsValue:(_Bool)value;
- (id)enterPhoneViewController:(id)controller expandedRichText:(id)text;

@end

#endif /* ONBEnterPhoneSubtaskController_h */
