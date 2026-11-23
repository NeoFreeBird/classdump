//
#ifndef T1OnboardingFlowHost_Protocol_h
#define T1OnboardingFlowHost_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1OnboardingFlowHost <NSObject>

@required

/* required instance methods */
- (void)showOnboardingFlowWithFlowSpec:(id)spec source:(long long)source cancellable:(_Bool)cancellable completion:(id /* block */)completion flowCompletion:(id /* block */)completion;
- (void)showOnboardingFlowWithFlowSpec:(id)spec source:(long long)source cancellable:(_Bool)cancellable completion:(id /* block */)completion flowCompletion:(id /* block */)completion;

@optional

/* optional instance methods */
- (void)showOnboardingFlowWithFlowSpec:(id)spec fromPanelID:(long long)id source:(long long)source completion:(id /* block */)completion flowCompletion:(id /* block */)completion;
- (void)showOnboardingFlowWithFlowSpec:(id)spec fromPanelID:(long long)id source:(long long)source completion:(id /* block */)completion flowCompletion:(id /* block */)completion;

@end

#endif /* T1OnboardingFlowHost_Protocol_h */
