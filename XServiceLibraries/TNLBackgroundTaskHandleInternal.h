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
