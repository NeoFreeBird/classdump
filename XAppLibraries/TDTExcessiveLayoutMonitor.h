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
