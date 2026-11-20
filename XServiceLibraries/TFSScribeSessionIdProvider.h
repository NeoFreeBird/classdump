//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeSessionIdProvider_h
#define TFSScribeSessionIdProvider_h
@import Foundation;

@class NSObject, NSString;

@interface TFSScribeSessionIdProvider : NSObject {
    /* instance variables */
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSString *_sessionId;
    _Bool observing;
}

/* class methods */
+ (id)sharedProvider;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setupObserversWithDidBecomeActiveNotificationName:(id)name accountChangeNotificationName:(id)name;
- (id)sessionId;
- (void)refreshSessionId:(id)id;

@end

#endif /* TFSScribeSessionIdProvider_h */
