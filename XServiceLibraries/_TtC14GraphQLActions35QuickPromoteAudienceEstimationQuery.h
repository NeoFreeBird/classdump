//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions35QuickPromoteAudienceEstimationQuery_h
#define _TtC14GraphQLActions35QuickPromoteAudienceEstimationQuery_h
@import Foundation;

@class GraphQLModels.EasypromoteTargetingOverridesInput, GraphQLModels.QuickPromotePromotionBudgetInput, GraphQLModels.QuickPromotePromotionContextV2Input, GraphQLScalars.NumericString ?, GraphQLScalars.QuickPromoteObjectiveInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.QuickPromoteAudienceEstimationQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.QuickPromotePromotionBudgetInput budget;
    GraphQLScalars.NumericString ? placement;
    GraphQLScalars.QuickPromoteObjectiveInput ? objective;
    GraphQLModels.EasypromoteTargetingOverridesInput targeting;
    GraphQLModels.QuickPromotePromotionContextV2Input user;
}

@end

#endif /* _TtC14GraphQLActions35QuickPromoteAudienceEstimationQuery_h */
