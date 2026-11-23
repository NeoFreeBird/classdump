//
#ifndef TFSTwitterAPIPeriscopeAuthenticationTokenRequestCommand_h
#define TFSTwitterAPIPeriscopeAuthenticationTokenRequestCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIPeriscopeAuthenticationTokenRequestCommand : TFSTwitterAPICommand

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIPeriscopeAuthenticationTokenRequestCommand_h */
