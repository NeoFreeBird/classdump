//
#ifndef TFSTwitterAPIAccountLoginVerificationEnrollmentCommand_h
#define TFSTwitterAPIAccountLoginVerificationEnrollmentCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIAccountLoginVerificationEnrollmentCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSString *publicKey;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *environment;
@property (retain, nonatomic) NSString *token;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id publicKey:(id)key deviceIdentifier:(id)identifier environment:(id)environment token:(id)token responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationEnrollmentCommand_h */
