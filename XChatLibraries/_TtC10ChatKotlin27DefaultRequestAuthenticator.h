//
#ifndef _TtC10ChatKotlin27DefaultRequestAuthenticator_h
#define _TtC10ChatKotlin27DefaultRequestAuthenticator_h
@import Foundation;

#include "_TtP14ChatNetworking20RequestAuthenticator_-Protocol.h"

@class _$s11XApiService0A13AuthenticatorCMn, _$sSSSg, _TtCs12_SwiftObject;

@interface ChatKotlin.DefaultRequestAuthenticator : Swift._SwiftObject <ChatNetworking.RequestAuthenticator> { // (Swift)
    /* instance variables */
    Swift.String? accountID;
    nominal type descriptor for XApiService.XApiAuthenticator authenticator;
}

/* instance methods */
- (void)signWithRequest:(id)request parameters:(id)parameters completion:(id /* block */)completion;

@end

#endif /* _TtC10ChatKotlin27DefaultRequestAuthenticator_h */
