//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP24TwitterOnboardingFeature31TwitterOnboardingFlowController__Protocol_h
#define _TtP24TwitterOnboardingFeature31TwitterOnboardingFlowController__Protocol_h
@import Foundation;

#include "OCFFlow-Protocol.h"

@protocol TwitterOnboardingFeature.TwitterOnboardingFlowController <OCFFlow>

@required

@property (nonatomic, readonly) long long flowStatus;

/* required instance methods */
- (void)startFlowWithPresenter:(id)presenter;
- (void)addFlowURLHandler:(id)urlhandler;

@optional

@end

#endif /* _TtP24TwitterOnboardingFeature31TwitterOnboardingFlowController__Protocol_h */
