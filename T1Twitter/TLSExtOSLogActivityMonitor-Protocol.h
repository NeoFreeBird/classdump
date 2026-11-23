//
#ifndef TLSExtOSLogActivityMonitor_Protocol_h
#define TLSExtOSLogActivityMonitor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLSExtOSLogActivityMonitor <NSObject>

@required

@optional

/* optional instance methods */
- (id)tlsext_defaultChannel;
- (void)tlsext_logMessage:(id)message;
- (void)tlsext_activityStreamEvent:(id)event;

@end

#endif /* TLSExtOSLogActivityMonitor_Protocol_h */
