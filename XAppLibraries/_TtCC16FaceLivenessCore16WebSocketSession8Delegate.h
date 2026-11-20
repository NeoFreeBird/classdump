//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC16FaceLivenessCore16WebSocketSession8Delegate_h
#define _TtCC16FaceLivenessCore16WebSocketSession8Delegate_h
@import Foundation;

#include "NSURLSessionWebSocketDelegate-Protocol.h"

@class NSObject, _$s10Foundation4DateVMn _$sSgc ->, _$syyc;

@interface FaceLivenessCore.WebSocketSession.Delegate : NSObject <NSURLSessionWebSocketDelegate> { // (Swift)
    /* instance variables */
    __C.CloseCode function type (escaping) onClose;
    () -> () onOpen;
    nominal type descriptor for Foundation.Date _$sSgc -> onServerDateReceived;
}

/* instance methods */
- (void)dealloc;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didOpenWithProtocol:(id)protocol;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didCloseWithCode:(long long)code reason:(id)reason;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (id)init;

@end

#endif /* _TtCC16FaceLivenessCore16WebSocketSession8Delegate_h */
