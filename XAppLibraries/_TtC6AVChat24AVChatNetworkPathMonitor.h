//
#ifndef _TtC6AVChat24AVChatNetworkPathMonitor_h
#define _TtC6AVChat24AVChatNetworkPathMonitor_h
@import Foundation;

@class Chat.AVChatNetworkPath ?, DispatchQueue, _$s7Network13NWPathMonitorCMn, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface AVChat.AVChatNetworkPathMonitor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Network.NWPathMonitor _monitor;
    DispatchQueue _queue;
    oneway _Atomic Chat.AVChatNetworkPath function type (escaping) _onChange;
    oneway _Atomic Chat.AVChatNetworkPath ? _baselinePath;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _settleTask;
}

@end

#endif /* _TtC6AVChat24AVChatNetworkPathMonitor_h */
