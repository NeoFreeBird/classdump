//
#ifndef ONBEnterUsernameSubtaskController_h
#define ONBEnterUsernameSubtaskController_h
@import Foundation;

#include "ONBEnterUsernameViewController.h"
#include "ONBEnterUsernameViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFEnterUsernameSubtask, OCFEnterUsernameSubtaskState, OCFRichText;

@interface ONBEnterUsernameSubtaskController : ONBSubtaskController <ONBEnterUsernameViewControllerDelegate> {
    /* instance variables */
    OCFEnterUsernameSubtask *_subtask;
    OCFEnterUsernameSubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
    ONBEnterUsernameViewController *_enterUsernameViewController;
    long long _suggestionTextIndex;
}

@property (readonly, nonatomic) OCFRichText *currentSuggestionRichText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)restartWithNavigationContext:(id)context navigationLink:(id)link;
- (_Bool)requiresAccountToStart;
- (_Bool)shouldBeginEditingWithUsernameViewController:(id)controller;
- (void)enterUsernameViewControllerDidLoad:(id)load;
- (void)enterUsernameViewControllerDidTapNext:(id)next;
- (void)enterUsernameViewControllerDidTapSkip:(id)skip;

@end

#endif /* ONBEnterUsernameSubtaskController_h */
