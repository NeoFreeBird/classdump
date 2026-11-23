//
#ifndef LHLSLog_h
#define LHLSLog_h
@import Foundation;

@class NSObject;

@interface LHLSLog : NSObject

/* class methods */
+ (void)addListener:(id)listener;
+ (void)removeListener:(id)listener;
+ (void)logWithLevel:(long long)level file:(id)file line:(int)line message:(id)message;
+ (id)stringWithLevel:(long long)level file:(id)file line:(int)line message:(id)message;

@end

#endif /* LHLSLog_h */
