//
#ifndef _TtC10Starscream12NativeEngine_h
#define _TtC10Starscream12NativeEngine_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionWebSocketDelegate-Protocol.h"

@class NSObject, Starscream.EngineDelegate ?, _$sSo25NSURLSessionWebSocketTaskCSg;

@interface Starscream.NativeEngine : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate> { // (Swift)
    /* instance variables */
    __C.NSURLSessionWebSocketTask? task;
    Starscream.EngineDelegate ? delegate;
}

/* instance methods */
- (void)URLSession:(id)urlsession webSocketTask:(id)task didOpenWithProtocol:(id)protocol;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didCloseWithCode:(long long)code reason:(id)reason;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (id)init;

@end

#endif /* _TtC10Starscream12NativeEngine_h */
