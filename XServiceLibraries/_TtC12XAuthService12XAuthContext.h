//
#ifndef _TtC12XAuthService12XAuthContext_h
#define _TtC12XAuthService12XAuthContext_h
@import Foundation;

@class XAuthService.XAuthConsumerCredential ?, XAuthService.XAuthType, _$sSSSg, _TtCs12_SwiftObject;

@interface XAuthService.XAuthContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XAuthService.XAuthType authType;
    XAuthService.XAuthConsumerCredential ? requestingAppCredential;
    Swift.String? bearerToken;
    Swift.String? callbackURLString;
}

@end

#endif /* _TtC12XAuthService12XAuthContext_h */
