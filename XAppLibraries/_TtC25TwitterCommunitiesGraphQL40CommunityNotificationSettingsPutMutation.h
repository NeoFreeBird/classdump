//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC25TwitterCommunitiesGraphQL40CommunityNotificationSettingsPutMutation_h
#define _TtC25TwitterCommunitiesGraphQL40CommunityNotificationSettingsPutMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSa -> _$s13GraphQLModels40CommunityNotificationTypeToSettingsInputVMn, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface TwitterCommunitiesGraphQL.CommunityNotificationSettingsPutMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString communityID;
    Swift.Array -> nominal type descriptor for GraphQLModels.CommunityNotificationTypeToSettingsInput communityNotificationSettings;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC25TwitterCommunitiesGraphQL40CommunityNotificationSettingsPutMutation_h */
