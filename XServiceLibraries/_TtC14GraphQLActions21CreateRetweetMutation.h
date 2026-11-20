//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions21CreateRetweetMutation_h
#define _TtC14GraphQLActions21CreateRetweetMutation_h
@import Foundation;

@class GraphQLModels.EngagementRequestInput ?, GraphQLScalars.CtaDisplayLocationInput ?, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateRetweetMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString tweetID;
    GraphQLModels.EngagementRequestInput ? engagementRequest;
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

#endif /* _TtC14GraphQLActions21CreateRetweetMutation_h */
