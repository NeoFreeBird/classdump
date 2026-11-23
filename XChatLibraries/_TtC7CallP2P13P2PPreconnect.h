//
#ifndef _TtC7CallP2P13P2PPreconnect_h
#define _TtC7CallP2P13P2PPreconnect_h
@import Foundation;

@class CallMedia.CallBatchClient, CallModels.CallUserID, CallP2P.CallP2POutboxStream, CallP2P.CallP2PSessionStream, CallP2P.CallP2PSignalInboxStream, CallP2P.CallRemoteEndStream, CallP2P.P2PCallSession, CallP2P.P2PPeerEventRelay, CallP2P.P2PPreconnectWorkerPluginPoint, _$sSS, _TtCs12_SwiftObject;

@interface CallP2P.P2PPreconnect : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallP2P.P2PCallSession session;
    CallModels.CallUserID hostUserID;
    Swift.String answerSDP;
    CallP2P.P2PPeerEventRelay events;
    CallMedia.CallBatchClient batchClient;
    CallModels.CallUserID selfUserID;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PSignalInboxStream callP2PSignalInboxStream;
    CallP2P.CallP2POutboxStream callP2POutboxStream;
    CallP2P.CallRemoteEndStream callRemoteEndStream;
    CallP2P.P2PPreconnectWorkerPluginPoint pluginPoint;
}

@end

#endif /* _TtC7CallP2P13P2PPreconnect_h */
