//
#ifndef _TtC14GraphQLActions25UpdateParodyLabelMutation_h
#define _TtC14GraphQLActions25UpdateParodyLabelMutation_h
@import Foundation;

@class GraphQLScalars.PCFLabelInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdateParodyLabelMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.PCFLabelInput parodyCommentaryFanLabel;
}

@end

#endif /* _TtC14GraphQLActions25UpdateParodyLabelMutation_h */
