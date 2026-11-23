//
#ifndef T1AutoplayPreviewingPolicy_h
#define T1AutoplayPreviewingPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"
#include "TFNViewControllerEventObserver-Protocol.h"

@class NSObject;

@interface T1AutoplayPreviewingPolicy : NSObject <TAVUIAutoplayFilterPolicy, TFNViewControllerEventObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *autoplayConditionsDidChangeBlock;
    NSNumber"16@0:8 *presentingViewController;
}

/* instance methods */
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (id)initWithPresentingViewController:(id)controller;
- (void)viewControllerViewWillFullyAppear:(id)appear;
- (void)viewControllerPreviewingStateDidChange:(id)change;
- (id)init;

@end

#endif /* T1AutoplayPreviewingPolicy_h */
