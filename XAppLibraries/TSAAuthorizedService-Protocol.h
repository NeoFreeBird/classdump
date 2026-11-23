//
#ifndef TSAAuthorizedService_Protocol_h
#define TSAAuthorizedService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TSAAuthorizedService <NSObject>

@required

/* required instance methods */
- (void)queryAuthorizationStatusWithCompletionBlock:(id /* block */)block;
- (id)defaultUsageDescription;
- (id)regrantPermissionInstructions;
- (void)requestAuthorizationWithCompletionBlock:(id /* block */)block;

@optional

/* optional instance methods */
- (void)requestAuthorizationWithContext:(id)context completionBlock:(id /* block */)block;
- (id)scribeContextWithScribeElement:(id)element andScribeParameters:(id)parameters;

@end

#endif /* TSAAuthorizedService_Protocol_h */
