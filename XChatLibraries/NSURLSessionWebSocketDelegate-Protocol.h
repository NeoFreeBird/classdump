//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLSessionWebSocketDelegate_Protocol_h
#define NSURLSessionWebSocketDelegate_Protocol_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@protocol NSURLSessionWebSocketDelegate <NSURLSessionTaskDelegate>

@required

@optional

/* optional instance methods */
- (void)URLSession:(id)urlsession webSocketTask:(id)task didOpenWithProtocol:(id)protocol;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didOpenWithProtocol:(id)protocol;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didCloseWithCode:(long long)code reason:(id)reason;
- (void)URLSession:(id)urlsession webSocketTask:(id)task didCloseWithCode:(long long)code reason:(id)reason;

@end

#endif /* NSURLSessionWebSocketDelegate_Protocol_h */
