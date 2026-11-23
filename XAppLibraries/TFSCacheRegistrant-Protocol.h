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
