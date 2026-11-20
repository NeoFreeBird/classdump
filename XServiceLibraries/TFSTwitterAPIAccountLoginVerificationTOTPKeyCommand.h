//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand_h
#define TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationTOTPKeyCommand_h */
