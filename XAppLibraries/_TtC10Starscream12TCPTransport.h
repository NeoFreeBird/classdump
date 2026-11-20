//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10Starscream12TCPTransport_h
#define _TtC10Starscream12TCPTransport_h
@import Foundation;

@class DispatchQueue, Starscream.TransportEventClient ?, Swift.Bool, _$s7Network12NWConnectionCMn ?, _TtCs12_SwiftObject;

@interface Starscream.TCPTransport : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Network.NWConnection ? connection;
    DispatchQueue queue;
    Starscream.TransportEventClient ? delegate;
    Swift.Bool isRunning;
    Swift.Bool isTLS;
}

@end

#endif /* _TtC10Starscream12TCPTransport_h */
