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
