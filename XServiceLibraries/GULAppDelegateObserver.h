//
#ifndef GULAppDelegateObserver_h
#define GULAppDelegateObserver_h
@import Foundation;

@class NSObject;

@interface GULAppDelegateObserver : NSObject {
    /* instance variables */
    _Bool _isObserving;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)observeUIApplication;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;

@end

#endif /* GULAppDelegateObserver_h */
