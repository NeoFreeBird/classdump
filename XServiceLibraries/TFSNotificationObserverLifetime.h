//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSNotificationObserverLifetime_h
#define TFSNotificationObserverLifetime_h
@import Foundation;

@class NSObject;

@interface TFSNotificationObserverLifetime : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 notificationCenter;
    B24@0:8@"NSString"16 observer;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* TFSNotificationObserverLifetime_h */
