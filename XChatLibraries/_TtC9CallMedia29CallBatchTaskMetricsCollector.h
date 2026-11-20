//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9CallMedia29CallBatchTaskMetricsCollector_h
#define _TtC9CallMedia29CallBatchTaskMetricsCollector_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class CallMedia.CallBatchTransaction ?, NSObject, Swift.Bool, _$s10XUtilities11UnfairQueueCMn, _$sSSSg, _$sSayScCyyt _$ss5NeverOMn, _$sSiSg;

@interface CallMedia.CallBatchTaskMetricsCollector : NSObject <NSURLSessionTaskDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue queue;
    CallMedia.CallBatchTransaction ? transaction;
    Swift.Int? headersMs;
    Swift.Int? failedMs;
    Swift.Int? signingMs;
    Swift.String? host;
    Swift.Bool isCollected;
    Swift.Array empty-list Swift.CheckedContinuation empty-list () nominal type descriptor for Swift.Never waiters;
}

/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (id)init;

@end

#endif /* _TtC9CallMedia29CallBatchTaskMetricsCollector_h */
