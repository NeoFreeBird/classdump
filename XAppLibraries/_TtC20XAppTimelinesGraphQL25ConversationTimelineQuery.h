//
#ifndef _TtC20XAppTimelinesGraphQL25ConversationTimelineQuery_h
#define _TtC20XAppTimelinesGraphQL25ConversationTimelineQuery_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels21DspClientContextInputVMn ?, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$s14GraphQLScalars23CtaDisplayLocationInputOMn ?, _$s14GraphQLScalars24TimelineRankingModeInputOMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XAppTimelinesGraphQL.ConversationTimelineQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString focalTweetID;
    Swift.String? controllerData;
    Swift.String? cursor;
    nominal type descriptor for GraphQLScalars.TimelineRankingModeInput rankingMode;
    Swift.Bool? includeTweetQuickPromoteEligibility;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeIsMember;
    Swift.Bool? includeProfessional;
    Swift.Bool? includeCommunityTweetRelationship;
    Swift.Bool? includeConversationContext;
    nominal type descriptor for GraphQLScalars.NumericString ? isMemberTargetUserID;
    Swift.String? referrer;
    Swift.Bool? skipAuthorCommunityRelationship;
    Swift.Bool? includeUnmentionInfoOverride;
    nominal type descriptor for GraphQLModels.DspClientContextInput ? dspClientContext;
    nominal type descriptor for GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
    Swift.Bool? includeCta;
    Swift.Bool includeCanPay;
    Swift.Bool includeCommunityAnalysis;
    Swift.Bool includeGrokAnalysisButton;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeIsTranslatable;
    Swift.Bool includeLiveEventPostContext;
    Swift.Bool includePillGroupsInModules;
    Swift.Bool includeReplyDeviceFollow;
    Swift.Bool includeSportsPostContext;
}

@end

#endif /* _TtC20XAppTimelinesGraphQL25ConversationTimelineQuery_h */
