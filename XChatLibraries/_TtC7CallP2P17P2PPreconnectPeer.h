//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P17P2PPreconnectPeer_h
#define _TtC7CallP2P17P2PPreconnectPeer_h
@import Foundation;

@class Builtin.DefaultActorStorage, CallMedia.LocalParticipantMedia.Tracks, CallMedia.PeerConnection, CallP2P.CallP2POutboxStream, _$sSa -> CallMedia.IceCandidate, _TtCs12_SwiftObject;

@interface CallP2P.P2PPreconnectPeer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    CallMedia.PeerConnection peer;
    CallMedia.LocalParticipantMedia.Tracks tracks;
    CallP2P.CallP2POutboxStream outbox;
    Swift.Array -> CallMedia.IceCandidate queuedRemoteCandidates;
}

@end

#endif /* _TtC7CallP2P17P2PPreconnectPeer_h */
