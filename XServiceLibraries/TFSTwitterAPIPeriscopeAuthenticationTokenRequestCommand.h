//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
