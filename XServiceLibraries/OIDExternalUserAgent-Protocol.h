//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
