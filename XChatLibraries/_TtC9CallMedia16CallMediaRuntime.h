//
#ifndef _TtC9CallMedia16CallMediaRuntime_h
#define _TtC9CallMedia16CallMediaRuntime_h
@import Foundation;

@class CallMedia.UnfairLock, _$sSDyS2SG, _$sSo24RTCPeerConnectionFactoryC, _TtCs12_SwiftObject;

@interface CallMedia.CallMediaRuntime : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.RTCPeerConnectionFactory peerConnectionFactory;
    [Swift.String : Swift.String] baseFieldTrials;
    CallMedia.UnfairLock fieldTrialsLock;
    [Swift.String : Swift.String] appliedFieldTrials;
}

@end

#endif /* _TtC9CallMedia16CallMediaRuntime_h */
