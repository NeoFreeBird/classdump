//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
