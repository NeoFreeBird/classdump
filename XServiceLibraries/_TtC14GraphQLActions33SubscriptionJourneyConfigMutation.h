//
#ifndef _TtC14GraphQLActions33SubscriptionJourneyConfigMutation_h
#define _TtC14GraphQLActions33SubscriptionJourneyConfigMutation_h
@import Foundation;

@class GraphQLModels.JourneysByOccurredMomentArgumentInput, GraphQLScalars.SubscriptionJourneyMomentInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SubscriptionJourneyConfigMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.SubscriptionJourneyMomentInput occurredMoment;
    GraphQLModels.JourneysByOccurredMomentArgumentInput byOccurredMoment;
    Swift.Bool includeAllMomentsConfig;
}

@end

#endif /* _TtC14GraphQLActions33SubscriptionJourneyConfigMutation_h */
