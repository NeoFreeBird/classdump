//
#ifndef _TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant__Protocol_h
#define _TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant__Protocol_h
@import Foundation;

#include "TFNTwitterAccount.h"

@protocol TwitterOnboardingFeature.TwitterOnboardingFlowAssistant

@required

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* required instance methods */
- (void)startGloballyHostedFlowAnimated:(_Bool)animated cancellable:(_Bool)cancellable start:(id /* block */)start completion:(id /* block */)completion;
- (void)startFlowWithPresenter:(id)presenter timeout:(double)timeout start:(id /* block */)start completion:(id /* block */)completion;

@optional

@end

#endif /* _TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant__Protocol_h */
