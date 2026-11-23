//
#ifndef ONBContainerViewControllerDelegate_Protocol_h
#define ONBContainerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBContainerViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)onboardingContainerViewControllerDidTapNext:(id)next;
- (void)onboardingContainerViewControllerDidTapSkip:(id)skip;
- (id)onboardingContainerViewController:(id)controller searchResultsViewControllerForViewModel:(id)model;
- (id)onboardingContainerViewController:(id)controller searchTypeaheadResultsViewControllerForViewModel:(id)model;

@optional

@end

#endif /* ONBContainerViewControllerDelegate_Protocol_h */
