//
#ifndef TNLURLSessionManagerV2_h
#define TNLURLSessionManagerV2_h
@import Foundation;

#include "TNLURLSessionManagerV1.h"

@interface TNLURLSessionManagerV2 : TNLURLSessionManagerV1

/* class methods */
+ (long long)version;
+ (id)internalSharedInstance;

/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;

@end

#endif /* TNLURLSessionManagerV2_h */
