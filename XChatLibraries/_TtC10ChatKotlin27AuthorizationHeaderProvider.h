//
#ifndef _TtC10ChatKotlin27AuthorizationHeaderProvider_h
#define _TtC10ChatKotlin27AuthorizationHeaderProvider_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainHeaderProvider-Protocol.h"

@class ChatNetworking20RequestAuthenticator_p, _TtCs12_SwiftObject;

@interface ChatKotlin.AuthorizationHeaderProvider : Swift._SwiftObject <Subsystem_ios_iosArm64_mainHeaderProvider> { // (Swift)
    /* instance variables */
    ChatNetworking20RequestAuthenticator_p requestAuthenticator;
}

/* instance methods */
- (void)headersRequest:(id)request completionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin27AuthorizationHeaderProvider_h */
