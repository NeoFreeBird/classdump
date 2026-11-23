//
#ifndef XCrashReportForwarder_h
#define XCrashReportForwarder_h
@import Foundation;

@class NSObject;

@interface XCrashReportForwarder : NSObject // (Swift)

/* class methods */
+ (void)forwardPendingReportsTo:(id)to;

/* instance methods */
- (id)init;

@end

#endif /* XCrashReportForwarder_h */
