//
#ifndef _TtC11ChatGrokBotP33_FEB7B14F2DBC7AF7B850A0E59EE0C2C335GrokBotCallRecordingRedirectRefuser_h
#define _TtC11ChatGrokBotP33_FEB7B14F2DBC7AF7B850A0E59EE0C2C335GrokBotCallRecordingRedirectRefuser_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSHTTPURLResponse, NSObject, NSURLRequest, NSURLSession, NSURLSessionTask;

@interface ChatGrokBot.(GrokBotCallRecordingRedirectRefuser in _FEB7B14F2DBC7AF7B850A0E59EE0C2C3) : NSObject <NSURLSessionTaskDelegate> // (Swift)

/* instance methods */
- (void)URLSession:(NSURLSession *)urlsession task:(NSURLSessionTask *)task willPerformHTTPRedirection:(NSHTTPURLResponse *)httpredirection newRequest:(NSURLRequest *)request completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC11ChatGrokBotP33_FEB7B14F2DBC7AF7B850A0E59EE0C2C335GrokBotCallRecordingRedirectRefuser_h */
