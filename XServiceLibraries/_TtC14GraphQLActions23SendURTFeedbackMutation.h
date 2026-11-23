//
#ifndef _TtC14GraphQLActions23SendURTFeedbackMutation_h
#define _TtC14GraphQLActions23SendURTFeedbackMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SendURTFeedbackMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String encodedFeedbackRequest;
    Swift.Bool isUndo;
}

@end

#endif /* _TtC14GraphQLActions23SendURTFeedbackMutation_h */
