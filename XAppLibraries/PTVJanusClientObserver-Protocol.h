//
#ifndef PTVJanusClientObserver_Protocol_h
#define PTVJanusClientObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVJanusClientObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)janusClient:(id)client didAddHandler:(id)handler;
- (void)janusClient:(id)client didRemoveHandler:(id)handler;
- (void)janusClient:(id)client didReceiveSlowLink:(id)link;
- (void)janusClient:(id)client didReceiveMedia:(id)media forVideoHandler:(id)handler;

@end

#endif /* PTVJanusClientObserver_Protocol_h */
