//
#ifndef _TtC13ChatTransportP33_68A9906CC0D86CD1B6356A09CC84F7E931ChatURLSessionWebSocketDelegate_h
#define _TtC13ChatTransportP33_68A9906CC0D86CD1B6356A09CC84F7E931ChatURLSessionWebSocketDelegate_h
@import Foundation;

#include "NSURLSessionWebSocketDelegate-Protocol.h"

@class NSObject;

@interface ChatTransport.(ChatURLSessionWebSocketDelegate in _68A9906CC0D86CD1B6356A09CC84F7E9) : NSObject <NSURLSessionWebSocketDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 session;
    @40@0:8:16@24@32 observer;
}

/* instance methods */
- (void)URLSession:(id)urlsession webSocketTask:(id)task didOpenWithProtocol:(id)protocol;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didCloseWithCode:(long long)code reason:(id)reason;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC13ChatTransportP33_68A9906CC0D86CD1B6356A09CC84F7E931ChatURLSessionWebSocketDelegate_h */
