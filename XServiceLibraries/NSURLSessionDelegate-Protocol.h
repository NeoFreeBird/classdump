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
