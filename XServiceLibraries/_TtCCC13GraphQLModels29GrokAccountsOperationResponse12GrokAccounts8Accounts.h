//
#ifndef _TtCCC13GraphQLModels29GrokAccountsOperationResponse12GrokAccounts8Accounts_h
#define _TtCCC13GraphQLModels29GrokAccountsOperationResponse12GrokAccounts8Accounts_h
@import Foundation;

@class GraphQLScalars.NumericString ?, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.Enumeration GraphQLScalars.GrokAccountMatchReason, _$sSa -> GraphQLModels.GrokAccountsOperationResponse.GrokAccounts.Accounts.Entitlements, _TtCs12_SwiftObject;

@interface GraphQLModels.GrokAccountsOperationResponse.GrokAccounts.Accounts : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? email;
    Swift.Array -> GraphQLModels.GrokAccountsOperationResponse.GrokAccounts.Accounts.Entitlements entitlements;
    Swift.String grokUserId;
    GraphQLScalars.NumericString ? lastConversationTimestampMs;
    Swift.String linkToken;
    Swift.Array -> GraphQLModels.Enumeration GraphQLScalars.GrokAccountMatchReason matchReasons;
}

@end

#endif /* _TtCCC13GraphQLModels29GrokAccountsOperationResponse12GrokAccounts8Accounts_h */
