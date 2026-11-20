//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC25TwitterCommunitiesGraphQL28RankedCommunityTimelineQuery_h
#define _TtC25TwitterCommunitiesGraphQL28RankedCommunityTimelineQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$s14GraphQLScalars23CtaDisplayLocationInputOMn ?, _$s14GraphQLScalars23TimelineTimeFilterInputOMn ?, _$s14GraphQLScalars23TimelineViewFilterInputOMn ?, _$s14GraphQLScalars24TimelineRankingModeInputOMn, _$s14GraphQLScalars37CommunityTimelineDisplayLocationInputOMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface TwitterCommunitiesGraphQL.RankedCommunityTimelineQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString restID;
    Swift.String? cursor;
    nominal type descriptor for GraphQLScalars.CommunityTimelineDisplayLocationInput displayCommunityLocation;
    nominal type descriptor for GraphQLScalars.TimelineRankingModeInput rankingMode;
    nominal type descriptor for GraphQLScalars.TimelineTimeFilterInput ? timeFilter;
    nominal type descriptor for GraphQLScalars.TimelineViewFilterInput ? viewFilter;
    Swift.Bool? includeTweetQuickPromoteEligibility;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeIsMember;
    Swift.Bool? includeProfessional;
    Swift.Bool? includeCommunityTweetRelationship;
    Swift.Bool? includeConversationContext;
    nominal type descriptor for GraphQLScalars.NumericString ? isMemberTargetUserID;
    Swift.Bool? skipAuthorCommunityRelationship;
    Swift.Bool? includeUnmentionInfoOverride;
    nominal type descriptor for GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
    Swift.Bool includeCanPay;
    Swift.Bool includeCommunityAnalysis;
    Swift.Bool includeCta;
    Swift.Bool includeGrokAnalysisButton;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeIsTranslatable;
    Swift.Bool includeLiveEventPostContext;
    Swift.Bool includePillGroupsInModules;
    Swift.Bool includeReplyDeviceFollow;
    Swift.Bool includeSportsPostContext;
}

@end

#endif /* _TtC25TwitterCommunitiesGraphQL28RankedCommunityTimelineQuery_h */
