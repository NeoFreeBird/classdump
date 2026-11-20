//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCVCCCC14XDraftsGraphQL33FetchDraftTweetsOperationResponse6Viewer9DraftList12ResponseData18TweetCreateRequest16PostTweetRequest_h
#define _TtCVCCCC14XDraftsGraphQL33FetchDraftTweetsOperationResponse6Viewer9DraftList12ResponseData18TweetCreateRequest16PostTweetRequest_h
@import Foundation;

@class Swift.Bool, XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.MediaOptions ?, XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.RichtextOptions ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$sSa -> XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.CashtagAttachmentOptions ?, _$sSa -> XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.ThreadTweets ?, _$sSa -> _$s14GraphQLScalars13NumericStringVMn ?, _$sSbSg, _TtCs12_SwiftObject;

@interface XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? attachmentUrl;
    Swift.Bool autoPopulateReplyMetadata;
    Swift.Array -> XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.CashtagAttachmentOptions ? cashtagAttachmentOptions;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString ? excludeReplyUserIds;
    nominal type descriptor for GraphQLScalars.NumericString ? inReplyToStatusId;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString ? mediaIds;
    XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.MediaOptions ? mediaOptions;
    Swift.Bool? possiblySensitive;
    XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.RichtextOptions ? richtextOptions;
    Swift.String status;
    Swift.Array -> XDraftsGraphQL.FetchDraftTweetsOperationResponse.Viewer.DraftList.ResponseData.TweetCreateRequest.PostTweetRequest.ThreadTweets ? threadTweets;
}

@end

#endif /* _TtCVCCCC14XDraftsGraphQL33FetchDraftTweetsOperationResponse6Viewer9DraftList12ResponseData18TweetCreateRequest16PostTweetRequest_h */
