//
#ifndef T1BackgroundRequestCompletionHandler_h
#define T1BackgroundRequestCompletionHandler_h
@import Foundation;

@class NSObject;

@interface T1BackgroundRequestCompletionHandler : NSObject {
    /* instance variables */
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; struct atomic_flag { _Atomic _Bool _Value; } predicate; } _onceToken;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_t1_handleBackgroundRequestFinished:(id)finished;
- (void)handleBackgroundRequestFinished:(id)finished response:(id)response sessionConfigurationIdentifier:(id)identifier sharedContainerIdentifier:(id)identifier taskIdentifier:(id)identifier pairedOperation:(id)operation;

@end

#endif /* T1BackgroundRequestCompletionHandler_h */
