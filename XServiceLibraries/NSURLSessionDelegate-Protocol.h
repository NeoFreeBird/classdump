//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLSessionDelegate_Protocol_h
#define NSURLSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NSURLSessionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)urlsession;

@end

#endif /* NSURLSessionDelegate_Protocol_h */
