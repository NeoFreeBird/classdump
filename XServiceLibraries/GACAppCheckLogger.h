//
#ifndef GACAppCheckLogger_h
#define GACAppCheckLogger_h
@import Foundation;

@class NSObject;

@interface GACAppCheckLogger : NSObject

/* class methods */
+ (void)load;
+ (long long)logLevel;
+ (void)setLogLevel:(long long)level;

@end

#endif /* GACAppCheckLogger_h */
