//
#ifndef _TtC12GrokBotRelay27URLSessionBotRelayTransport_h
#define _TtC12GrokBotRelay27URLSessionBotRelayTransport_h
@import Foundation;

#include "NSURLSessionWebSocketDelegate-Protocol.h"

@class NSObject, _$s10Foundation10URLRequestVMn, _$sScCyyt _$ss5ErrorMp ?, _$sScS12ContinuationVMn GrokBotRelay.BotRelayTransportEvent _$s_GSg ->, _$sSo12NSURLSessionCSg, _$sSo25NSURLSessionWebSocketTaskCSg, _$sSo6NSLockC;

@interface GrokBotRelay.URLSessionBotRelayTransport : NSObject <NSURLSessionWebSocketDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URLRequest request;
    __C.NSLock lock;
    __C.NSURLSessionWebSocketTask? task;
    __C.NSURLSession? session;
    Swift.CheckedContinuation empty-list () protocol descriptor for Swift.Error ? openContinuation;
    nominal type descriptor for Swift.AsyncStream.Continuation GrokBotRelay.BotRelayTransportEvent _$s_GSg -> eventContinuation;
}

/* instance methods */
- (void)URLSession:(id)urlsession webSocketTask:(id)task didOpenWithProtocol:(id)protocol;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didCloseWithCode:(long long)code reason:(id)reason;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (id)init;

@end

#endif /* _TtC12GrokBotRelay27URLSessionBotRelayTransport_h */
