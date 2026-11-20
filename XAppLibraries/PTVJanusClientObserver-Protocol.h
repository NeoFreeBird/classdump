//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
