//
#ifndef _TtC14GraphQLActions25SubscriberConsentMutation_h
#define _TtC14GraphQLActions25SubscriberConsentMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, GraphQLScalars.VerifiedProgramConsentTypeInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSa -> GraphQLModels.VerifiedProgramSubscriberConsentDataInput ?, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SubscriberConsentMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString creatorID;
    GraphQLScalars.VerifiedProgramConsentTypeInput consentType;
    Swift.Bool? consented;
    Swift.Array -> GraphQLModels.VerifiedProgramSubscriberConsentDataInput ? metadata;
}

@end

#endif /* _TtC14GraphQLActions25SubscriberConsentMutation_h */
