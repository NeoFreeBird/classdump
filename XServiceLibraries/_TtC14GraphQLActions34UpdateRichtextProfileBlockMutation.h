//
#ifndef _TtC14GraphQLActions34UpdateRichtextProfileBlockMutation_h
#define _TtC14GraphQLActions34UpdateRichtextProfileBlockMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdateRichtextProfileBlockMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userId;
    GraphQLScalars.NumericString blockId;
    Swift.String richtextValue;
}

@end

#endif /* _TtC14GraphQLActions34UpdateRichtextProfileBlockMutation_h */
