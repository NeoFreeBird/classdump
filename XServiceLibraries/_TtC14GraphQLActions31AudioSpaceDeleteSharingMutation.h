//
#ifndef _TtC14GraphQLActions31AudioSpaceDeleteSharingMutation_h
#define _TtC14GraphQLActions31AudioSpaceDeleteSharingMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.AudioSpaceDeleteSharingMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String audioSpaceID;
    GraphQLScalars.NumericString sharingID;
}

@end

#endif /* _TtC14GraphQLActions31AudioSpaceDeleteSharingMutation_h */
