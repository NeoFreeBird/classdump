//
#ifndef _TtC17GrokVoiceRealtime20WebSocketPingMonitor_h
#define _TtC17GrokVoiceRealtime20WebSocketPingMonitor_h
@import Foundation;

@class GrokVoiceRealtime.WebSocketPingMonitorDelegate ?, Swift.Bool, _$s10Foundation4DateVMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSo6NSLockC, _$syycSg, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.WebSocketPingMonitor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokVoiceRealtime.WebSocketPingMonitorDelegate ? delegate;
    (() -> ())? sendPing;
    Swift.Double interval;
    __C.NSLock lock;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pingTask;
    nominal type descriptor for Foundation.Date ? sentAt;
    Swift.Bool awaitingPong;
}

@end

#endif /* _TtC17GrokVoiceRealtime20WebSocketPingMonitor_h */
