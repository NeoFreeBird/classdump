//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XApiClient23XApiAttemptTaskDelegate_h
#define _TtC10XApiClient23XApiAttemptTaskDelegate_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSHTTPURLResponse, NSObject, NSURLRequest, NSURLSession, NSURLSessionTask, _$s10Foundation3URLVMn ?, _$sSo23NSURLSessionTaskMetricsCSg, _$sSo6NSLockC;

@interface XApiClient.XApiAttemptTaskDelegate : NSObject <NSURLSessionTaskDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL ? origin;
    __C.NSLock lock;
    __C.NSURLSessionTaskMetrics? collectedMetrics;
}

/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(NSURLSession *)urlsession task:(NSURLSessionTask *)task willPerformHTTPRedirection:(NSHTTPURLResponse *)httpredirection newRequest:(NSURLRequest *)request completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC10XApiClient23XApiAttemptTaskDelegate_h */
