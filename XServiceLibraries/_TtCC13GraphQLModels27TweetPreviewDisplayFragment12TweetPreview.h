//
#ifndef _TtCC13GraphQLModels27TweetPreviewDisplayFragment12TweetPreview_h
#define _TtCC13GraphQLModels27TweetPreviewDisplayFragment12TweetPreview_h
@import Foundation;

@class GraphQLModels.EntitySetFragment ?, GraphQLModels.TweetPreviewDisplayFragment.TweetPreview.ArticlePreview ?, GraphQLModels.TweetPreviewDisplayFragment.TweetPreview.Core ?, GraphQLModels.TweetPreviewDisplayFragment.TweetPreview.ReplyToResults ?, GraphQLModels.ViewCountInfoFragment ?, GraphQLScalars.NumericString, _$sSSSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TweetPreviewDisplayFragment.TweetPreview : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TweetPreviewDisplayFragment.TweetPreview.ArticlePreview ? articlePreview;
    nominal type descriptor for Swift.Int64 ? bookmarkCount;
    GraphQLModels.TweetPreviewDisplayFragment.TweetPreview.Core ? core;
    Swift.String? createdAt;
    GraphQLModels.EntitySetFragment ? entities;
    nominal type descriptor for Swift.Int64 ? favoriteCount;
    nominal type descriptor for Swift.Int64 ? quoteCount;
    nominal type descriptor for Swift.Int64 ? replyCount;
    GraphQLModels.TweetPreviewDisplayFragment.TweetPreview.ReplyToResults ? replyToResults;
    GraphQLScalars.NumericString restId;
    nominal type descriptor for Swift.Int64 ? retweetCount;
    Swift.String? text;
    GraphQLModels.ViewCountInfoFragment ? viewCountInfo;
}

@end

#endif /* _TtCC13GraphQLModels27TweetPreviewDisplayFragment12TweetPreview_h */
