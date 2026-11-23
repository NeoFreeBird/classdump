//
#ifndef ONBEnterEmailSubtaskController_h
#define ONBEnterEmailSubtaskController_h
@import Foundation;

#include "ONBEnterEmailViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFEnterEmailSubtask, OCFEnterEmailSubtaskState;

@interface ONBEnterEmailSubtaskController : ONBSubtaskController <ONBEnterEmailViewControllerDelegate> {
    /* instance variables */
    OCFEnterEmailSubtask *_subtask;
    OCFEnterEmailSubtaskState *_state;
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
- (void)enterEmailViewControllerDidTapSkip:(id)skip;
- (void)enterEmailViewController:(id)controller didTapNextWithEmail:(id)email settings:(id)settings discoverabilitySettingsValue:(_Bool)value;
- (id)enterEmailViewController:(id)controller expandedRichText:(id)text;

@end

#endif /* ONBEnterEmailSubtaskController_h */
