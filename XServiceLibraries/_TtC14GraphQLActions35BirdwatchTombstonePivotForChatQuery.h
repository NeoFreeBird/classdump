//
#ifndef _TtC14GraphQLActions35BirdwatchTombstonePivotForChatQuery_h
#define _TtC14GraphQLActions35BirdwatchTombstonePivotForChatQuery_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.BirdwatchTombstonePivotForChatQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString restID;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions35BirdwatchTombstonePivotForChatQuery_h */
