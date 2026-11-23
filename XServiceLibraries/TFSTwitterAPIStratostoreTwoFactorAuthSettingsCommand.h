//
#ifndef TFSTwitterAPIStratostoreTwoFactorAuthSettingsCommand_h
#define TFSTwitterAPIStratostoreTwoFactorAuthSettingsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIStratostoreTwoFactorAuthSettingsCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (nonatomic) long long userID;
@property (nonatomic) _Bool shouldUseNewEndpoint;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id userID:(long long)id responseModelBuilder:(id)builder shouldUseNewEndpoint:(_Bool)endpoint completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIStratostoreTwoFactorAuthSettingsCommand_h */
