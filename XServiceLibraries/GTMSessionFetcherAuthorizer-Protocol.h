//
#ifndef GTMSessionFetcherAuthorizer_Protocol_h
#define GTMSessionFetcherAuthorizer_Protocol_h
@import Foundation;

#include "GTMFetcherAuthorizationProtocol-Protocol.h"

@protocol GTMSessionFetcherAuthorizer <GTMFetcherAuthorizationProtocol>

@required

/* required instance methods */
- (void)authorizeRequest:(id)request completionHandler:(id /* block */)handler;

@optional

/* optional instance methods */
- (void)authorizeRequest:(id)request delegate:(id)delegate didFinishSelector:(SEL)selector;
- (void)authorizeRequest:(id)request delegate:(id)delegate didFinishSelector:(SEL)selector;

@end

#endif /* GTMSessionFetcherAuthorizer_Protocol_h */
