//
#ifndef RTCDataChannelDelegate_Protocol_h
#define RTCDataChannelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol RTCDataChannelDelegate <NSObject>

@required

/* required instance methods */
- (void)dataChannelDidChangeState:(id)state;
- (void)dataChannel:(id)channel didReceiveMessageWithBuffer:(id)buffer;
- (void)dataChannel:(id)channel didReceiveMessageWithBuffer:(id)buffer;

@optional

/* optional instance methods */
- (void)dataChannel:(id)channel didChangeBufferedAmount:(unsigned long long)amount;

@end

#endif /* RTCDataChannelDelegate_Protocol_h */
