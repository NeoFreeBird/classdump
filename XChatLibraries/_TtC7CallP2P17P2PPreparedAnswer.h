//
#ifndef _TtC7CallP2P17P2PPreparedAnswer_h
#define _TtC7CallP2P17P2PPreparedAnswer_h
@import Foundation;

@class CallMedia.LocalParticipantMedia.Tracks, CallMedia.PeerConnection, CallModels.CallConnectionConfiguration, CallModels.CallID, CallModels.CallUserID ?, CallModels.MediaSessionID, CallP2P.P2PAnsweredOffer, CallP2P.P2PIceTransportStrategy, CallP2P.P2PPeerEventRelay, CallP2P.P2PPreconnect ?, _$sSS, _$sSo14RTCDataChannelCSg, _TtCs12_SwiftObject;

@interface CallP2P.P2PPreparedAnswer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallModels.CallID callID;
    CallModels.MediaSessionID sessionID;
    CallP2P.P2PAnsweredOffer answeredOffer;
    CallModels.CallUserID ? peerUserID;
    CallModels.MediaSessionID offererSessionID;
    CallModels.CallConnectionConfiguration configuration;
    CallMedia.PeerConnection peer;
    __C.RTCDataChannel? stateChannel;
    CallMedia.LocalParticipantMedia.Tracks tracks;
    Swift.String answerSDP;
    CallP2P.P2PIceTransportStrategy strategy;
    CallP2P.P2PPeerEventRelay events;
    CallP2P.P2PPreconnect ? preconnect;
}

@end

#endif /* _TtC7CallP2P17P2PPreparedAnswer_h */
