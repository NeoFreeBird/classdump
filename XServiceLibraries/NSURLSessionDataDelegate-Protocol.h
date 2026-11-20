//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLSessionDataDelegate_Protocol_h
#define NSURLSessionDataDelegate_Protocol_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>

@required

@optional

/* optional instance methods */
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didBecomeDownloadTask:(id)task;
- (void)URLSession:(id)urlsession dataTask:(id)task didBecomeStreamTask:(id)task;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task willCacheResponse:(id)response completionHandler:(id /* block */)handler;

@end

#endif /* NSURLSessionDataDelegate_Protocol_h */
