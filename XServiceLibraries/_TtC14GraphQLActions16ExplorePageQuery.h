//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions16ExplorePageQuery_h
#define _TtC14GraphQLActions16ExplorePageQuery_h
@import Foundation;

@class GraphQLScalars.CtaDisplayLocationInput ?, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ExplorePageQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Bool? includeTweetQuickPromoteEligibility;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeIsMember;
    Swift.Bool? includeProfessional;
    Swift.Bool? includeCommunityTweetRelationship;
    Swift.Bool? includeConversationContext;
    GraphQLScalars.NumericString ? isMemberTargetUserID;
    Swift.Bool? skipAuthorCommunityRelationship;
    Swift.String? timelineContext;
    Swift.Bool? includeUnmentionInfoOverride;
    GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
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

#endif /* _TtC14GraphQLActions16ExplorePageQuery_h */
