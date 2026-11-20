//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions52SubscriptionProductFeatureUndoSettingsUpdateMutation_h
#define _TtC14GraphQLActions52SubscriptionProductFeatureUndoSettingsUpdateMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSbSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SubscriptionProductFeatureUndoSettingsUpdateMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String featureName;
    Swift.Bool? undoOriginalTweetEnabled;
    Swift.Bool? undoPollTweetEnabled;
    Swift.Bool? undoQuoteTweetEnabled;
    Swift.Bool? undoReplyTweetEnabled;
    Swift.Bool? undoThreadTweetEnabled;
    nominal type descriptor for Swift.Int32 ? undoTweetDurationSecs;
    Swift.Bool? viewTweetAfterSendingEnabled;
}

@end

#endif /* _TtC14GraphQLActions52SubscriptionProductFeatureUndoSettingsUpdateMutation_h */
