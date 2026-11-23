//
#ifndef PTVPhoneCallObserver_Protocol_h
#define PTVPhoneCallObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVPhoneCallObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)phoneCallMonitorDidReceiveIncomingPhoneCall:(id)call;
- (void)phoneCallMonitorDidAcceptIncomingPhoneCall:(id)call;
- (void)phoneCallMonitorDidDisconnectIncomingPhoneCall:(id)call;

@end

#endif /* PTVPhoneCallObserver_Protocol_h */
