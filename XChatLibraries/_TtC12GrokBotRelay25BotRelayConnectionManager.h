//
#ifndef _TtC12GrokBotRelay25BotRelayConnectionManager_h
#define _TtC12GrokBotRelay25BotRelayConnectionManager_h
@import Foundation;

@class GrokBotRelay.BotRelayClient ?, GrokBotRelay.BotRelayTransportFactory, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface GrokBotRelay.BotRelayConnectionManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSLock lock;
    GrokBotRelay.BotRelayClient ? currentClient;
    Swift.String? identity;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? swap;
    GrokBotRelay.BotRelayTransportFactory transportFactory;
}

@end

#endif /* _TtC12GrokBotRelay25BotRelayConnectionManager_h */
