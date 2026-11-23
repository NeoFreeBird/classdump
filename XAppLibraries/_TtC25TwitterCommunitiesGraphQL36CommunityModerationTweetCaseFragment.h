//
#ifndef _TtC25TwitterCommunitiesGraphQL36CommunityModerationTweetCaseFragment_h
#define _TtC25TwitterCommunitiesGraphQL36CommunityModerationTweetCaseFragment_h
@import Foundation;

@class TwitterCommunitiesGraphQL.CommunityTweetReportSliceFragment, _$s13GraphQLModels20TweetResultsFragmentCMn, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$ss5Int32VMn, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface TwitterCommunitiesGraphQL.CommunityModerationTweetCaseFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    nominal type descriptor for Swift.Int32 reportCount;
    nominal type descriptor for Swift.Int64 reportCreatedAtMax;
    TwitterCommunitiesGraphQL.CommunityTweetReportSliceFragment reportsSlice;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    nominal type descriptor for GraphQLModels.TweetResultsFragment tweetResults;
}

@end

#endif /* _TtC25TwitterCommunitiesGraphQL36CommunityModerationTweetCaseFragment_h */
