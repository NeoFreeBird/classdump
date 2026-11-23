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
