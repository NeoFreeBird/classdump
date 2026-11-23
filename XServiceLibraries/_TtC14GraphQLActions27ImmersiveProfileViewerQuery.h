//
#ifndef _TtC14GraphQLActions27ImmersiveProfileViewerQuery_h
#define _TtC14GraphQLActions27ImmersiveProfileViewerQuery_h
@import Foundation;

@class GraphQLScalars.CtaDisplayLocationInput ?, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ImmersiveProfileViewerQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? cursor;
    GraphQLScalars.NumericString ? pinnedTweetID;
    Swift.Bool? includePinnedTweet;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeIsMember;
    Swift.Bool? includeProfessional;
    GraphQLScalars.NumericString ? isMemberTargetUserID;
    GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
    Swift.Bool includeCanPay;
    Swift.Bool includeCommunityAnalysis;
    Swift.Bool includeCommunityTweetRelationship;
    Swift.Bool includeConversationContext;
    Swift.Bool includeCta;
    Swift.Bool includeGrokAnalysisButton;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeIsTranslatable;
    Swift.Bool includeLiveEventPostContext;
    Swift.Bool includePillGroupsInModules;
    Swift.Bool includeReplyDeviceFollow;
    Swift.Bool includeSportsPostContext;
    Swift.Bool includeTweetQuickPromoteEligibility;
    Swift.Bool includeUnmentionInfoOverride;
    Swift.Bool skipAuthorCommunityRelationship;
}

@end

#endif /* _TtC14GraphQLActions27ImmersiveProfileViewerQuery_h */
