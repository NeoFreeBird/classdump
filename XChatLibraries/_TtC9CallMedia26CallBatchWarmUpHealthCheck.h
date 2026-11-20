//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9CallMedia26CallBatchWarmUpHealthCheck_h
#define _TtC9CallMedia26CallBatchWarmUpHealthCheck_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSObject, _$ss5ErrorMp _$sSgYbc ->, _$syyYbc;

@interface CallMedia.CallBatchWarmUpHealthCheck : NSObject <NSURLSessionTaskDelegate> { // (Swift)
    /* instance variables */
    @Sendable () -> () onReusedConnectionWithoutResponse;
    protocol descriptor for Swift.Error _$sSgYbc -> onCompletion;
}

/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (id)init;

@end

#endif /* _TtC9CallMedia26CallBatchWarmUpHealthCheck_h */
