//
#ifndef TFSTwitterAPIAccountUpdatePasswordCommand_h
#define TFSTwitterAPIAccountUpdatePasswordCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIAccountUpdatePasswordCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSString *currentPassword;
@property (retain, nonatomic) NSString *updatedPassword;
@property (retain, nonatomic) NSString *passwordConfirmation;
@property (retain, nonatomic) NSString *castleToken;

/* instance methods */
- (id)initWithAccountID:(id)id currentPassword:(id)password updatedPassword:(id)password passwordConfirmation:(id)confirmation castleToken:(id)token context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountUpdatePasswordCommand_h */
