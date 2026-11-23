//
#ifndef TFSTwitterAPIAuthorizationStateUpdateCommand_h
#define TFSTwitterAPIAuthorizationStateUpdateCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSDictionary, NSString;

@interface TFSTwitterAPIAuthorizationStateUpdateCommand : TFSTwitterAPICommand {
    /* instance variables */
    NSString *_userID;
    NSString *_deviceID;
    NSString *_permissionName;
    NSDictionary *_authorizationState;
}

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source userID:(id)id deviceID:(id)id permissionName:(id)name authorizationState:(id)state completionBlock:(id /* block */)block;
- (id)request;
- (void)scribeCommandResponse:(id)response to:(id)to;

@end

#endif /* TFSTwitterAPIAuthorizationStateUpdateCommand_h */
