//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIAccountLoginVerificationEnrollmentDeleteCommand_h
#define TFSTwitterAPIAccountLoginVerificationEnrollmentDeleteCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIAccountLoginVerificationEnrollmentDeleteCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *publicKey;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id publicKey:(id)key completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationEnrollmentDeleteCommand_h */
