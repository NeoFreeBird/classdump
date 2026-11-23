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
