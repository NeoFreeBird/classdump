//
#ifndef OIDExternalUserAgent_Protocol_h
#define OIDExternalUserAgent_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OIDExternalUserAgent <NSObject>

@required

/* required instance methods */
- (_Bool)presentExternalUserAgentRequest:(id)request session:(id)session;
- (void)dismissExternalUserAgentAnimated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* OIDExternalUserAgent_Protocol_h */
