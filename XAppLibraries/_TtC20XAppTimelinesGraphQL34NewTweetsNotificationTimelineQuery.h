//
#ifndef _TtC20XAppTimelinesGraphQL34NewTweetsNotificationTimelineQuery_h
#define _TtC20XAppTimelinesGraphQL34NewTweetsNotificationTimelineQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$s14GraphQLScalars23CtaDisplayLocationInputOMn ?, _$s14GraphQLScalars34TweetNotificationTimelineTypeInputOMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XAppTimelinesGraphQL.NewTweetsNotificationTimelineQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString userID;
    nominal type descriptor for GraphQLScalars.TweetNotificationTimelineTypeInput timelineType;
    Swift.String? cursor;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeIsMember;
    Swift.Bool? includeProfessional;
    nominal type descriptor for GraphQLScalars.NumericString ? isMemberTargetUserID;
    nominal type descriptor for GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
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

#endif /* _TtC20XAppTimelinesGraphQL34NewTweetsNotificationTimelineQuery_h */
