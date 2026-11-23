//
#ifndef _TtC14GraphQLActions35SetToxicReplyFilterSettingsMutation_h
#define _TtC14GraphQLActions35SetToxicReplyFilterSettingsMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SetToxicReplyFilterSettingsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userId;
    Swift.Bool enabled;
}

@end

#endif /* _TtC14GraphQLActions35SetToxicReplyFilterSettingsMutation_h */
