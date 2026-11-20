//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLBackgroundTaskHandleInternal_h
#define TNLBackgroundTaskHandleInternal_h
@import Foundation;

@class NSObject, NSString;

@interface TNLBackgroundTaskHandleInternal : NSObject {
    /* instance variables */
    id /* block */ _expirationHandler;
    NSString *_name;
    unsigned long long _taskIdentifier;
}

/* instance methods */

@end

#endif /* TNLBackgroundTaskHandleInternal_h */
