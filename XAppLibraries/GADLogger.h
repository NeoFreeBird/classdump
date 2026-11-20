//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADLogger_h
#define GADLogger_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADLogger : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)logFeature:(id)feature logType:(id)type format:(id)format;

@end

#endif /* GADLogger_h */
