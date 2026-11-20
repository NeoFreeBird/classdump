//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC13GraphQLModels41EnableTotpTwoFactorBeginOperationResponse24EnableTotpTwoFactorBegin_h
#define _TtCC13GraphQLModels41EnableTotpTwoFactorBeginOperationResponse24EnableTotpTwoFactorBegin_h
@import Foundation;

@class _$sSS, _$sSa -> GraphQLModels.EnableTotpTwoFactorBeginOperationResponse.EnableTotpTwoFactorBegin.Errors ?, _$sSa -> GraphQLModels.Enumeration GraphQLScalars.OnboardReauthMethodEnum _$sGGSg ->, _TtCs12_SwiftObject;

@interface GraphQLModels.EnableTotpTwoFactorBeginOperationResponse.EnableTotpTwoFactorBegin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.Enumeration GraphQLScalars.OnboardReauthMethodEnum _$sGGSg -> availableReauthMethods;
    Swift.Array -> GraphQLModels.EnableTotpTwoFactorBeginOperationResponse.EnableTotpTwoFactorBegin.Errors ? errors;
    Swift.String nextComponent;
    Swift.String sessionToken;
}

@end

#endif /* _TtCC13GraphQLModels41EnableTotpTwoFactorBeginOperationResponse24EnableTotpTwoFactorBegin_h */
