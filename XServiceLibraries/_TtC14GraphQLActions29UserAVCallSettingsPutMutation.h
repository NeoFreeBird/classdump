//
#ifndef _TtC14GraphQLActions29UserAVCallSettingsPutMutation_h
#define _TtC14GraphQLActions29UserAVCallSettingsPutMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UserAVCallSettingsPutMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userID;
    Swift.Bool hasAvCallsEnabled;
    Swift.Bool acceptCallsFromAddressbook;
    Swift.Bool acceptCallsFromVerified;
    Swift.Bool acceptCallsFromFollowing;
    Swift.Bool acceptCallsFromEveryone;
    Swift.Bool hasEnhancedCallPrivacyEnabled;
}

@end

#endif /* _TtC14GraphQLActions29UserAVCallSettingsPutMutation_h */
