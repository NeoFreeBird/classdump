//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
