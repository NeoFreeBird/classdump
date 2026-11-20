//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions26TweetResultsByRestIdsQuery_h
#define _TtC14GraphQLActions26TweetResultsByRestIdsQuery_h
@import Foundation;

@class GraphQLScalars.CtaDisplayLocationInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSa -> GraphQLScalars.NumericString, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.TweetResultsByRestIdsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Array -> GraphQLScalars.NumericString restIDs;
    Swift.Bool? includeTweetQuickPromoteEligibility;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool? includeCommunityTweetRelationship;
    Swift.Bool? includeConversationContext;
    Swift.Bool? skipAuthorCommunityRelationship;
    Swift.Bool? includeUnmentionInfoOverride;
    GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
    Swift.Bool includeCanPay;
    Swift.Bool includeCommunityAnalysis;
    Swift.Bool includeCta;
    Swift.Bool includeGrokAnalysisButton;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeIsTranslatable;
    Swift.Bool includeLiveEventPostContext;
    Swift.Bool includeReplyDeviceFollow;
    Swift.Bool includeSportsPostContext;
}

@end

#endif /* _TtC14GraphQLActions26TweetResultsByRestIdsQuery_h */
