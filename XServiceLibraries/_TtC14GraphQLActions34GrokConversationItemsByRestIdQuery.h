//
#ifndef _TtC14GraphQLActions34GrokConversationItemsByRestIdQuery_h
#define _TtC14GraphQLActions34GrokConversationItemsByRestIdQuery_h
@import Foundation;

@class GraphQLScalars.CtaDisplayLocationInput ?, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.GrokConversationItemsByRestIdQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString restId;
    Swift.String? cursor;
    GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
    Swift.Bool includeCanPay;
    Swift.Bool includeCommunityAnalysis;
    Swift.Bool includeCommunityTweetRelationship;
    Swift.Bool includeConversationContext;
    Swift.Bool includeCta;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokAnalysisButton;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeIsTranslatable;
    Swift.Bool includeLiveEventPostContext;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
    Swift.Bool includeSportsPostContext;
    Swift.Bool includeTweetQuickPromoteEligibility;
    Swift.Bool includeUnmentionInfoOverride;
    Swift.Bool skipAuthorCommunityRelationship;
}

@end

#endif /* _TtC14GraphQLActions34GrokConversationItemsByRestIdQuery_h */
