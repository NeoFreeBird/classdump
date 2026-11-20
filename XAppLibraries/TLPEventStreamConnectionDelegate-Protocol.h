//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLPEventStreamConnectionDelegate_Protocol_h
#define TLPEventStreamConnectionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLPEventStreamConnectionDelegate <NSObject>

@required

/* required instance methods */
- (id)initialTopicsForEventStreamConnection:(id)connection;
- (void)eventStreamConnection:(id)connection didReceiveSubscribeResponseForTopics:(id)topics failedTopics:(id)topics error:(id)error;
- (void)eventStreamConnection:(id)connection didReceiveEvent:(id)event;
- (void)eventStreamConnection:(id)connection didDisconnectWithError:(id)error shouldReconnect:(_Bool)reconnect metadata:(id)metadata;

@optional

@end

#endif /* TLPEventStreamConnectionDelegate_Protocol_h */
