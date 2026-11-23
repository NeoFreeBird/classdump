//
#ifndef _TtC14GraphQLActions27QuickPromoteValidationQuery_h
#define _TtC14GraphQLActions27QuickPromoteValidationQuery_h
@import Foundation;

@class GraphQLModels.EasypromoteTargetingOverridesInput, GraphQLModels.QuickPromotePromotionBudgetInput, GraphQLScalars.NumericString, GraphQLScalars.QuickPromoteObjectiveInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.QuickPromoteValidationQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString adsAccountID;
    GraphQLModels.QuickPromotePromotionBudgetInput budget;
    GraphQLScalars.QuickPromoteObjectiveInput ? objective;
    GraphQLModels.EasypromoteTargetingOverridesInput targetingOverrides;
    GraphQLScalars.NumericString tweetID;
    GraphQLScalars.NumericString userID;
}

@end

#endif /* _TtC14GraphQLActions27QuickPromoteValidationQuery_h */
