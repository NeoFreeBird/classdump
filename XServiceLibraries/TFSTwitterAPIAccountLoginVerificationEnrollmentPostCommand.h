//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIAccountLoginVerificationEnrollmentPostCommand_h
#define TFSTwitterAPIAccountLoginVerificationEnrollmentPostCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIAccountLoginVerificationEnrollmentPostCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *publicKey;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *offlineCode;
@property (retain, nonatomic) NSNumber *iterationCount;
@property (retain, nonatomic) NSString *environment;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) _Bool updatePushDestination;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id publicKey:(id)key deviceIdentifier:(id)identifier offlineCode:(id)code iterationCount:(id)count environment:(id)environment token:(id)token updatePushDestination:(_Bool)destination completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationEnrollmentPostCommand_h */
