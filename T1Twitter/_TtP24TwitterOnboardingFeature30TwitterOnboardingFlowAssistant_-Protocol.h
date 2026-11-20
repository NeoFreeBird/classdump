//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant__Protocol_h
#define _TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant__Protocol_h
@import Foundation;

@class TFNTwitterAccount;

@protocol TwitterOnboardingFeature.TwitterOnboardingFlowAssistant

@required

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* required instance methods */
- (void)startGloballyHostedFlowAnimated:(_Bool)animated cancellable:(_Bool)cancellable start:(id /* block */)start completion:(id /* block */)completion;
- (void)startFlowWithPresenter:(id)presenter timeout:(double)timeout start:(id /* block */)start completion:(id /* block */)completion;

@optional

@end

#endif /* _TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant__Protocol_h */
