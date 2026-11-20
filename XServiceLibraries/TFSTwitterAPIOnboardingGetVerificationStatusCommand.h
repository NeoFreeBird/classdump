//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIOnboardingGetVerificationStatusCommand_h
#define TFSTwitterAPIOnboardingGetVerificationStatusCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIOnboardingGetVerificationStatusCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *email;

/* instance methods */
- (id)initWithContext:(id)context email:(id)email source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOnboardingGetVerificationStatusCommand_h */
