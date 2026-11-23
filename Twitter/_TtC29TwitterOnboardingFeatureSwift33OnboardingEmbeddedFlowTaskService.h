//
#ifndef _TtC29TwitterOnboardingFeatureSwift33OnboardingEmbeddedFlowTaskService_h
#define _TtC29TwitterOnboardingFeatureSwift33OnboardingEmbeddedFlowTaskService_h
@import Foundation;

#include "OCFTaskService-Protocol.h"

@class NSObject, _$sSo17OCFAPITaskServiceCSg, _$sSo7OCFTaskCSg;

@interface TwitterOnboardingFeatureSwift.OnboardingEmbeddedFlowTaskService : NSObject <OCFTaskService> { // (Swift)
    /* instance variables */
    __C.OCFTask? task;
    __C.OCFAPITaskService? apiTaskService;
}

/* instance methods */
- (id)sendPreviousTask:(id)task withState:(id)state forAccountID:(id)id terminationReason:(long long)reason debugParameters:(id)parameters headerFields:(id)fields fetchNextTaskWithResponseBlock:(id /* block */)block;
- (id)init;

@end

#endif /* _TtC29TwitterOnboardingFeatureSwift33OnboardingEmbeddedFlowTaskService_h */
