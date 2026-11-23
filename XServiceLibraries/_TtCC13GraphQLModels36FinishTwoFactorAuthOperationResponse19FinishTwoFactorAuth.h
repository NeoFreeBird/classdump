//
#ifndef _TtCC13GraphQLModels36FinishTwoFactorAuthOperationResponse19FinishTwoFactorAuth_h
#define _TtCC13GraphQLModels36FinishTwoFactorAuthOperationResponse19FinishTwoFactorAuth_h
@import Foundation;

@class GraphQLModels.Union GraphQLModels.FinishTwoFactorAuthOperationResponse.FinishTwoFactorAuth.Outputs, GraphQLScalars.NumericString, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.FinishTwoFactorAuthOperationResponse.FinishTwoFactorAuth.Errors ?, _TtCs12_SwiftObject;

@interface GraphQLModels.FinishTwoFactorAuthOperationResponse.FinishTwoFactorAuth : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.FinishTwoFactorAuthOperationResponse.FinishTwoFactorAuth.Errors ? errors;
    Swift.String knownDeviceToken;
    Swift.String nextComponent;
    GraphQLModels.Union GraphQLModels.FinishTwoFactorAuthOperationResponse.FinishTwoFactorAuth.Outputs outputs;
    Swift.String? redirectVariant;
    GraphQLScalars.NumericString userId;
    Swift.String username;
}

@end

#endif /* _TtCC13GraphQLModels36FinishTwoFactorAuthOperationResponse19FinishTwoFactorAuth_h */
