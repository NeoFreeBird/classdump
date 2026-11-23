//
#ifndef _TtC11ChatGraphQL24UpdateDmSettingsMutation_h
#define _TtC11ChatGraphQL24UpdateDmSettingsMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels20XChatAvSettingsInputVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.UpdateDmSettingsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? allowDmsFrom;
    Swift.Bool? alwaysAllowDmsFromSubscribers;
    nominal type descriptor for GraphQLModels.XChatAvSettingsInput ? avSettings;
    Swift.String? dmReceiptSettings;
}

@end

#endif /* _TtC11ChatGraphQL24UpdateDmSettingsMutation_h */
