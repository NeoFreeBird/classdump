//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADGCacheContext_h
#define GADGCacheContext_h
@import Foundation;

@class NSObject, NSString;

@interface GADGCacheContext : NSObject

@property (readonly, nonatomic) NSString *GWSQueryID;
@property (readonly, nonatomic) long long periodicReportIntervalMs;

/* instance methods */
- (id)initWithQueryID:(id)id reportIntervalMilliseconds:(long long)milliseconds;

@end

#endif /* GADGCacheContext_h */
