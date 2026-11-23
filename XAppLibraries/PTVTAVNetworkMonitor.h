//
#ifndef PTVTAVNetworkMonitor_h
#define PTVTAVNetworkMonitor_h
@import Foundation;

@class NSObject;

@interface PTVTAVNetworkMonitor : NSObject

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)handleTAVNotification:(id)tavnotification;

@end

#endif /* PTVTAVNetworkMonitor_h */
