//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XDraftsGraphQL28CreateScheduledTweetMutation_h
#define _TtC14XDraftsGraphQL28CreateScheduledTweetMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels21PostTweetRequestInputVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$ss5Int64VMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XDraftsGraphQL.CreateScheduledTweetMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLModels.PostTweetRequestInput postTweetRequest;
    nominal type descriptor for Swift.Int64 executeAt;
}

@end

#endif /* _TtC14XDraftsGraphQL28CreateScheduledTweetMutation_h */
