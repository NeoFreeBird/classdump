//
#ifndef T1StatusViewPhotoLoadDurationStatusEventHandler_h
#define T1StatusViewPhotoLoadDurationStatusEventHandler_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface T1StatusViewPhotoLoadDurationStatusEventHandler : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_eventQueue;
}

/* class methods */
+ (void)handleStatusViewEvent:(id)event controller:(id)controller;

/* instance methods */
- (id)init;
- (void)handleStatusViewEvent:(id)event controller:(id)controller;

@end

#endif /* T1StatusViewPhotoLoadDurationStatusEventHandler_h */
