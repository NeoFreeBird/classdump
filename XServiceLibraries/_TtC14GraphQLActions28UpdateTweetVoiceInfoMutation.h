//
#ifndef _TtC14GraphQLActions28UpdateTweetVoiceInfoMutation_h
#define _TtC14GraphQLActions28UpdateTweetVoiceInfoMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _$sSa -> _$ss5Int16VMn ?, _$ss5Int16VMn ?, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdateTweetVoiceInfoMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString tweetID;
    nominal type descriptor for Swift.Int16 ? clipIndex;
    nominal type descriptor for Swift.Int16 ? numberOfClips;
    nominal type descriptor for Swift.Int32 ? totalDurationMillis;
    Swift.Array -> nominal type descriptor for Swift.Int16 ? audiowaveValues;
    Swift.String? audioSpaceID;
}

@end

#endif /* _TtC14GraphQLActions28UpdateTweetVoiceInfoMutation_h */
