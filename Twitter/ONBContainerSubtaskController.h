//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBContainerSubtaskController_h
#define ONBContainerSubtaskController_h
@import Foundation;

#include "ONBContainerViewController.h"
#include "ONBContainerViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFHeader, OCFSubtask;

@interface ONBContainerSubtaskController : ONBSubtaskController <ONBContainerViewControllerDelegate> {
    /* instance variables */
    id <ONBSubtaskControllerDelegate> _delegate;
    ONBContainerViewController *_containerViewController;
    OCFHeader *_header;
    OCFSubtask *_subtask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSubtask:(id)subtask state:(id)state flowToken:(id)token delegate:(id)delegate;
- (void)presentViewController:(id)controller;
- (void)presentViewController:(id)controller animated:(_Bool)animated;
- (void)updateNextButtonText:(id)text;
- (void)updateNextButtonEnabled:(_Bool)enabled;
- (void)updateDetailRichText:(id)text;
- (id)nextLink;
- (id)skipLink;
- (id)detailRichText;
- (id)searchSpec;
- (id)generateContainedViewController;
- (id)generateSearchResultsViewControllerWithViewModel:(id)model;
- (id)generateSearchTypeaheadResultsViewControllerWithViewModel:(id)model;
- (void)nextTapped;
- (void)skipTapped;
- (id)searchScribeContext;
- (_Bool)shouldShowSeparator;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)onboardingContainerViewControllerDidTapNext:(id)next;
- (void)onboardingContainerViewControllerDidTapSkip:(id)skip;
- (id)onboardingContainerViewController:(id)controller searchTypeaheadResultsViewControllerForViewModel:(id)model;
- (id)onboardingContainerViewController:(id)controller searchResultsViewControllerForViewModel:(id)model;

@end

#endif /* ONBContainerSubtaskController_h */
