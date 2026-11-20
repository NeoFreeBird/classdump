//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
