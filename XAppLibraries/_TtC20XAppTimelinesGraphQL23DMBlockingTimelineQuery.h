//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20XAppTimelinesGraphQL23DMBlockingTimelineQuery_h
#define _TtC20XAppTimelinesGraphQL23DMBlockingTimelineQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn ?, _$s14GraphQLScalars23CtaDisplayLocationInputOMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XAppTimelinesGraphQL.DMBlockingTimelineQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for Swift.Int64 ? count;
    Swift.String? cursor;
    nominal type descriptor for GraphQLScalars.NumericString ? isMemberTargetUserID;
    nominal type descriptor for GraphQLScalars.CtaDisplayLocationInput ? ctaDisplayLocation;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeIsMember;
    Swift.Bool? includeProfessional;
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

#endif /* _TtC20XAppTimelinesGraphQL23DMBlockingTimelineQuery_h */
