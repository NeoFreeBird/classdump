//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TDTExcessiveLayoutMonitor_h
#define TDTExcessiveLayoutMonitor_h
@import Foundation;

@class NSObject;

@interface TDTExcessiveLayoutMonitor : NSObject

/* class methods */
+ (void)start;
+ (void)stop;
+ (void)toggle;

@end

#endif /* TDTExcessiveLayoutMonitor_h */
