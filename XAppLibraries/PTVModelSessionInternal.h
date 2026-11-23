//
#ifndef PTVModelSessionInternal_h
#define PTVModelSessionInternal_h
@import Foundation;

#include "NSURLSessionDelegate-Protocol.h"
#include "NSURLSessionTaskDelegate-Protocol.h"
#include "PTVModelSession-Protocol.h"

@class NSObject, NSString;

@interface PTVModelSessionInternal : NSObject <PTVModelSession, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    /* instance variables */
    unsigned long long _sessionCounters[3];
    NSURLSession *_sessions[3];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)sessionForMode:(long long)mode;
- (void)ptv_incrementMode:(long long)mode;
- (void)ptv_decrementMode:(long long)mode;
- (id)ptv_taskWithMode:(long long)mode context:(id)context;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;

@end

#endif /* PTVModelSessionInternal_h */
