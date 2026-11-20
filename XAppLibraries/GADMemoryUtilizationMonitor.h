//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMemoryUtilizationMonitor_h
#define GADMemoryUtilizationMonitor_h
@import Foundation;

@class NSObject;

@interface GADMemoryUtilizationMonitor : NSObject

@property (readonly, nonatomic) unsigned long long initiallyAllocatedByteCount;
@property (readonly, nonatomic) unsigned long long peakAllocatedByteCount;
@property (readonly, nonatomic) unsigned long long currentlyAllocatedByteCount;

/* instance methods */
- (id)init;
- (void)update;

@end

#endif /* GADMemoryUtilizationMonitor_h */
