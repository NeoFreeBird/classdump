//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNApplicationPropertyObserver_h
#define TFNApplicationPropertyObserver_h
@import Foundation;

@class NSObject, UIApplication;

@interface TFNApplicationPropertyObserver : NSObject {
    /* instance variables */
    UIApplication *_application;
}

@property long long applicationState;
@property long long userInterfaceLayoutDirection;

/* instance methods */
- (id)initWithApplication:(id)application;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_tfn_applicationStateChanged:(id)changed;
- (void)_tfn_applicationStateDidChange;
- (void)dealloc;

@end

#endif /* TFNApplicationPropertyObserver_h */
