//
#ifndef _TtC9CallMedia16CallStateChannel_h
#define _TtC9CallMedia16CallStateChannel_h
@import Foundation;

#include "RTCDataChannelDelegate-Protocol.h"

@class CallMedia.CallPeerStateDecoding, NSObject, _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn CallMedia.CallStateChannelStatus _$ss5NeverOMn, _$sSo14RTCDataChannelC;

@interface CallMedia.CallStateChannel : NSObject <RTCDataChannelDelegate> { // (Swift)
    /* instance variables */
    __C.RTCDataChannel dataChannel;
    CallMedia.CallPeerStateDecoding peerStateDecoder;
    nominal type descriptor for Combine.CurrentValueSubject CallMedia.CallStateChannelStatus nominal type descriptor for Swift.Never statusSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never messageSubject;
}

/* instance methods */
- (void)dataChannelDidChangeState:(id)state;
- (void)dataChannel:(id)channel didReceiveMessageWithBuffer:(id)buffer;
- (id)init;

@end

#endif /* _TtC9CallMedia16CallStateChannel_h */
