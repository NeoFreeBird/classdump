//
#ifndef TFSTwitterAPIOnboardingPostBeginVerificationCommand_h
#define TFSTwitterAPIOnboardingPostBeginVerificationCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIOnboardingPostBeginVerificationCommand : TFSTwitterAPICommand

@property (copy, nonatomic) NSString *flowToken;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *castleToken;
@property (nonatomic) _Bool byVoice;

/* class methods */
+ (id)emailVerificationCommandWithContext:(id)context accountID:(id)id flowToken:(id)token email:(id)email displayName:(id)name castleToken:(id)token source:(unsigned long long)source completionBlock:(id /* block */)block;
+ (id)phoneVerificationCommandWithContext:(id)context accountID:(id)id flowToken:(id)token phoneNumber:(id)number countryCode:(id)code castleToken:(id)token byVoice:(_Bool)voice source:(unsigned long long)source completionBlock:(id /* block */)block;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id flowToken:(id)token email:(id)email displayName:(id)name phoneNumber:(id)number countryCode:(id)code castleToken:(id)token byVoice:(_Bool)voice source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOnboardingPostBeginVerificationCommand_h */
