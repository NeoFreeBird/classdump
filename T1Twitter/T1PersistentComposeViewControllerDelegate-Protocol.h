//
#ifndef T1PersistentComposeViewControllerDelegate_Protocol_h
#define T1PersistentComposeViewControllerDelegate_Protocol_h
@import Foundation;

#include "T1ComposeViewControllerDelegate-Protocol.h"

@protocol T1PersistentComposeViewControllerDelegate <T1ComposeViewControllerDelegate>

@required

/* required instance methods */
- (void)composeBarViewControllerResetComposition:(id)composition;
- (void)composeBarViewController:(id)controller willSendComposition:(id)composition;
- (void)composeBarViewController:(id)controller didSendComposition:(id)composition;
- (void)composeBarViewControllerDidBeginEditing:(id)editing;
- (void)showAutocompleteViewController:(id)controller forComposeBarViewController:(id)controller;
- (void)hideAutocompleteViewController:(id)controller forComposeBarViewController:(id)controller;
- (void)composeBarViewController:(id)controller transitionToFullComposerWithTrigger:(long long)trigger;
- (void)composeBarViewController:(id)controller transitionToFullComposerWithTrigger:(long long)trigger morphTransition:(id)transition;
- (void)composeBarViewControllerTransitionToFullComposerLocationPicker:(id)picker;
- (void)composeBarViewController:(id)controller didSwitchToAccount:(id)account;
- (void)composeBarViewController:(id)controller handleInlineActionEventType:(id)type inlineActionsView:(id)view inlineActionType:(unsigned long long)type;

@optional

/* optional instance methods */
- (id)composeBarViewControllerScribeParameters:(id)parameters;
- (id)composeBarViewControllerPrepareFullComposer:(id)composer;
- (void)composeBarViewControllerDidEndEditing:(id)editing;
- (void)composeBarViewController:(id)controller scribeQuickComposerAction:(id)action element:(id)element eventInfo:(id)info;

@end

#endif /* T1PersistentComposeViewControllerDelegate_Protocol_h */
