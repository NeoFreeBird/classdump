//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCacheRegistrant_Protocol_h
#define TFSCacheRegistrant_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSCacheRegistrant <NSObject>

@required

/* required instance methods */
- (void)purgeWithReason:(unsigned long long)reason completion:(id /* block */)completion;
- (void)purgeWithReason:(unsigned long long)reason completion:(id /* block */)completion;
- (void)collectMetrics:(id /* block */)metrics;

@optional

@end

#endif /* TFSCacheRegistrant_Protocol_h */
