//
#ifndef _TtC4Grok17GatewayConnection_h
#define _TtC4Grok17GatewayConnection_h
@import Foundation;

@class Builtin.DefaultActorStorage, Grok.Gateway.ServerEvent _$sYbScMYccSg ->, Grok.GatewayClientToolCallHandling ?, Grok.GatewayCredentials, Grok.GatewayPendingCreateRegistry, Grok.GatewayWebSocket, _$sSDySS Grok.GatewayConnection.Entry, _$sScTyyt _$ss5NeverOMn ?, _$sySS_SS Grok.Gateway.ResponsePersistStatus _$stYbScMYccSg, _TtCs12_SwiftObject;

@interface Grok.GatewayConnection : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Grok.GatewayCredentials credentials;
    Grok.Gateway.ServerEvent _$sYbScMYccSg -> onConversationLiveEvent;
     empty-list Swift.String first-element-marker Swift.String Grok.Gateway.ResponsePersistStatus _$stYbScMYccSg onResponsePersisted;
    Grok.GatewayClientToolCallHandling ? clientToolCallHandler;
    Grok.GatewayWebSocket socket;
    Swift.Dictionary empty-list Swift.String Grok.GatewayConnection.Entry clientEventIdToEntry;
    Swift.Dictionary empty-list Swift.String Grok.GatewayConnection.Entry sessionIdToEntry;
    Grok.GatewayPendingCreateRegistry pendingCreateRegistry;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? serverEventsReadTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? idleCloseTask;
}

@end

#endif /* _TtC4Grok17GatewayConnection_h */
