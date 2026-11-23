//
#ifndef PTVJanusClientHandlerFactoryProtocol_Protocol_h
#define PTVJanusClientHandlerFactoryProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVJanusClientHandlerFactoryProtocol <NSObject>

@required

/* required instance methods */
- (id)createPublishHandlerWithFeatures:(struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; })features configuration:(id)configuration delegate:(id)delegate janusSessionId:(unsigned long long)id userIdForJanusAuth:(id)auth role:(unsigned long long)role userId:(id)id adminUserId:(id)id iceServer:(id)server peerConnectionFactory:(id)factory;
- (id)createSubscribeHandlerWithFeatures:(struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; })features configuration:(id)configuration delegate:(id)delegate janusSessionId:(unsigned long long)id userIdForJanusAuth:(id)auth userId:(id)id adminUserId:(id)id iceServer:(id)server peerConnectionFactory:(id)factory listenerFeedId:(unsigned long long)id streams:(id)streams;
- (id)createPeerConnectionFactory;
- (id)createPeerConnectionFactoryWithMonitor:(id)monitor;

@optional

@end

#endif /* PTVJanusClientHandlerFactoryProtocol_Protocol_h */
