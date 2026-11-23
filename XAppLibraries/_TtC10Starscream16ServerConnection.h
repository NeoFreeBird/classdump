//
#ifndef _TtC10Starscream16ServerConnection_h
#define _TtC10Starscream16ServerConnection_h
@import Foundation;

@class Starscream.ConnectionDelegate ?, Starscream.ConnectionEvent _$scSg ->, Starscream.FoundationHTTPServerHandler, Starscream.FrameCollector, Starscream.TCPTransport, Starscream.WSFramer, Swift.Bool, _$sSS, _TtCs12_SwiftObject;

@interface Starscream.ServerConnection : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Starscream.TCPTransport transport;
    Starscream.FoundationHTTPServerHandler httpHandler;
    Starscream.WSFramer framer;
    Starscream.FrameCollector frameHandler;
    Swift.Bool didUpgrade;
    Starscream.ConnectionEvent _$scSg -> onEvent;
    Starscream.ConnectionDelegate ? delegate;
    Swift.String id;
}

@end

#endif /* _TtC10Starscream16ServerConnection_h */
