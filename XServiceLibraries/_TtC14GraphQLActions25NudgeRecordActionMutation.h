//
#ifndef _TtC14GraphQLActions25NudgeRecordActionMutation_h
#define _TtC14GraphQLActions25NudgeRecordActionMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, GraphQLScalars.ScribeNudgeActionTypeInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.NudgeRecordActionMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString nudgeID;
    GraphQLScalars.ScribeNudgeActionTypeInput nudgeActionType;
}

@end

#endif /* _TtC14GraphQLActions25NudgeRecordActionMutation_h */
