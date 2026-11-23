//
#ifndef T1MediaServicesResetScribe_h
#define T1MediaServicesResetScribe_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSNotificationCenter, NSObject;

@interface T1MediaServicesResetScribe : NSObject {
    /* instance variables */
    NSNotificationCenter *_notificationCenter;
    id <NSObject> _mediaServicesResetObserver;
}

/* class methods */
+ (id)_t1_topViewController;

/* instance methods */
- (id)init;
- (id)initWithNotificationCenter:(id)center viewControllerProvider:(id /* block */)provider;
- (void)dealloc;

@end

#endif /* T1MediaServicesResetScribe_h */
