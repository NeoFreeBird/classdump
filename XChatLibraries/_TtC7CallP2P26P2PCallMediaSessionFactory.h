//
#ifndef _TtC7CallP2P26P2PCallMediaSessionFactory_h
#define _TtC7CallP2P26P2PCallMediaSessionFactory_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallMediaRuntime, CallMedia.CallStateChannelStream, CallMedia.CallVideoTrackStream, CallMedia.LocalParticipantMedia, CallP2P.CallP2PAnswerStream, CallP2P.CallP2PJoinStream, CallP2P.CallP2PLegsStream, CallP2P.CallP2PMediaSessionStream, CallP2P.CallP2POutboxStream, CallP2P.CallP2PSessionStream, CallP2P.P2PAudioEncoding, CallP2P.P2PIceTransportStrategy, _TtCs12_SwiftObject;

@interface CallP2P.P2PCallMediaSessionFactory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallP2P.P2PIceTransportStrategy strategy;
    CallP2P.P2PAudioEncoding audioEncoding;
    CallMedia.CallMediaRuntime callMediaRuntime;
    CallMedia.CallVideoTrackStream callVideoTrackStream;
    CallMedia.LocalParticipantMedia localParticipantMedia;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallMedia.CallStateChannelStream callStateChannelStream;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2POutboxStream callP2POutboxStream;
    CallP2P.CallP2PMediaSessionStream callP2PMediaSessionStream;
    CallP2P.CallP2PAnswerStream callP2PAnswerStream;
    CallP2P.CallP2PJoinStream callP2PJoinStream;
    CallP2P.CallP2PLegsStream callP2PLegsStream;
}

@end

#endif /* _TtC7CallP2P26P2PCallMediaSessionFactory_h */
