//
#ifndef TVGContainerCache_h
#define TVGContainerCache_h
@import Foundation;

#include "TFSCacheRegistrant-Protocol.h"

@class NSObject, NSString;

@interface TVGContainerCache : NSObject <TFSCacheRegistrant>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)collectMetrics:(id /* block */)metrics;
- (void)purgeWithReason:(unsigned long long)reason completion:(id /* block */)completion;

@end

#endif /* TVGContainerCache_h */
