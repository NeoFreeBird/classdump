//
#ifndef _TtC25TwitterCommunitiesGraphQL50CommunityAutomoderationKeywordsSettingsPutMutation_h
#define _TtC25TwitterCommunitiesGraphQL50CommunityAutomoderationKeywordsSettingsPutMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars47CommunityAutomoderationKeywordsSettingTypeInputOMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSaySSG, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface TwitterCommunitiesGraphQL.CommunityAutomoderationKeywordsSettingsPutMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString communityID;
    nominal type descriptor for GraphQLScalars.CommunityAutomoderationKeywordsSettingTypeInput automoderationKeywordsSettingType;
    [Swift.String] keywords;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC25TwitterCommunitiesGraphQL50CommunityAutomoderationKeywordsSettingsPutMutation_h */
