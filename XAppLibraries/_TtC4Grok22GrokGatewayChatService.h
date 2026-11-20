//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok22GrokGatewayChatService_h
#define _TtC4Grok22GrokGatewayChatService_h
@import Foundation;

@class Grok.AccountScopedGatewayServiceRegistry, Grok.ConnectorAuthClientToolRouterRegistry, Grok.GatewayBranchLeafStore, _$s7Combine18PassthroughSubjectCMn _$ss5Int64VMn userID_SS14conversationIdSS08responseD0 Grok.Gateway.ResponsePersistStatus statust _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySS14conversationId_SS5titlet _$ss5NeverOMn, _$sSD -> _$ss5Int64VMn Grok.GatewayConversationLiveBadgeStore, _$sSD -> _$ss5Int64VMn Grok.GrokGatewayIdentitySource, _$sSD -> _$ss5Int64VMn Grok0A18AccountPerspective_p, _$sSD -> _$ss5Int64VMn _$s7Combine14AnyCancellableCMn, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface Grok.GrokGatewayChatService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject  empty-list (conversationId: Swift.String, title: Swift.String) nominal type descriptor for Swift.Never gatewayConversationTitleUpdated;
    nominal type descriptor for Combine.PassthroughSubject nominal type descriptor for Swift.Int64 userID_SS14conversationIdSS08responseD0 Grok.Gateway.ResponsePersistStatus statust nominal type descriptor for Swift.Never gatewayResponsePersisted;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Grok.GrokGatewayIdentitySource identitySourcesByUserID;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 nominal type descriptor for Combine.AnyCancellable credentialsObservationsByUserID;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Grok0A18AccountPerspective_p accountPerspectivesByUserID;
    nominal type descriptor for Swift.Int64 ? activeUserID;
    Grok.GatewayBranchLeafStore branchLeaves;
    Grok.ConnectorAuthClientToolRouterRegistry connectorAuthRouters;
    Grok.AccountScopedGatewayServiceRegistry accountServices;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Grok.GatewayConversationLiveBadgeStore conversationLiveBadgeStoresByUserID;
}

@end

#endif /* _TtC4Grok22GrokGatewayChatService_h */
