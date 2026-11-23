//
#ifndef _TtCC13GraphQLModels35BeginTwoFactorAuthOperationResponse18BeginTwoFactorAuth_h
#define _TtCC13GraphQLModels35BeginTwoFactorAuthOperationResponse18BeginTwoFactorAuth_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.OnboardTwoFactorAuthMethodTypeEnum, GraphQLScalars.NumericString, _$sSS, _$sSa -> GraphQLModels.BeginTwoFactorAuthOperationResponse.BeginTwoFactorAuth.Errors ?, _TtCs12_SwiftObject;

@interface GraphQLModels.BeginTwoFactorAuthOperationResponse.BeginTwoFactorAuth : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String challenge;
    Swift.Array -> GraphQLModels.BeginTwoFactorAuthOperationResponse.BeginTwoFactorAuth.Errors ? errors;
    GraphQLModels.Enumeration GraphQLScalars.OnboardTwoFactorAuthMethodTypeEnum twoFactorAuthMethodType;
    GraphQLScalars.NumericString userId;
}

@end

#endif /* _TtCC13GraphQLModels35BeginTwoFactorAuthOperationResponse18BeginTwoFactorAuth_h */
