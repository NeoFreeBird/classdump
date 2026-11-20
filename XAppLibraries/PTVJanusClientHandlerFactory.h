//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusClientHandlerFactory_h
#define PTVJanusClientHandlerFactory_h
@import Foundation;

#include "PTVJanusClientHandlerFactoryProtocol-Protocol.h"

@class NSObject, NSString;

@interface PTVJanusClientHandlerFactory : NSObject <PTVJanusClientHandlerFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)createPublishHandlerWithFeatures:(struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; })features configuration:(id)configuration delegate:(id)delegate janusSessionId:(unsigned long long)id userIdForJanusAuth:(id)auth role:(unsigned long long)role userId:(id)id adminUserId:(id)id iceServer:(id)server peerConnectionFactory:(id)factory;
- (id)createSubscribeHandlerWithFeatures:(struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; })features configuration:(id)configuration delegate:(id)delegate janusSessionId:(unsigned long long)id userIdForJanusAuth:(id)auth userId:(id)id adminUserId:(id)id iceServer:(id)server peerConnectionFactory:(id)factory listenerFeedId:(unsigned long long)id streams:(id)streams;
- (id)createPeerConnectionFactory;
- (id)createPeerConnectionFactoryWithMonitor:(id)monitor;

@end

#endif /* PTVJanusClientHandlerFactory_h */
