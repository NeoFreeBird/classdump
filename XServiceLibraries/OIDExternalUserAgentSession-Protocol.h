//
#ifndef OIDExternalUserAgentSession_Protocol_h
#define OIDExternalUserAgentSession_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OIDExternalUserAgentSession <NSObject>

@required

/* required instance methods */
- (void)cancel;
- (void)cancelWithCompletion:(id /* block */)completion;
- (_Bool)resumeExternalUserAgentFlowWithURL:(id)url;
- (void)failExternalUserAgentFlowWithError:(id)error;

@optional

@end

#endif /* OIDExternalUserAgentSession_Protocol_h */
