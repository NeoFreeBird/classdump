//
#ifndef T1ImagePipelineCacheMetricsScribing_h
#define T1ImagePipelineCacheMetricsScribing_h
@import Foundation;

#include "T1ImagePipelineLoadSourceEventObserver-Protocol.h"

@class NSObject, NSString;

@interface T1ImagePipelineCacheMetricsScribing : NSObject <T1ImagePipelineLoadSourceEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)imageFetchOperation:(id)operation didHit:(long long)hit;
- (void)imageFetchOperation:(id)operation didMiss:(long long)miss;
- (void)imageFetchOperation:(id)operation didFail:(long long)fail;

@end

#endif /* T1ImagePipelineCacheMetricsScribing_h */
