//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
