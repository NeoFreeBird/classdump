//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCacheMetrics_h
#define TFSCacheMetrics_h
@import Foundation;

@class NSObject;

@interface TFSCacheMetrics : NSObject

@property (readonly, nonatomic) unsigned long long currentCount;
@property (readonly, nonatomic) unsigned long long countLimit;
@property (readonly, nonatomic) unsigned long long currentCost;
@property (readonly, nonatomic) unsigned long long costLimit;

/* instance methods */
- (id)initWithCurrentCount:(unsigned long long)count countLimit:(unsigned long long)limit currentCost:(unsigned long long)cost costLimit:(unsigned long long)limit;
- (id)init;
- (id)dictionaryRepresentation;

@end

#endif /* TFSCacheMetrics_h */
