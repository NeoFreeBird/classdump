//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
