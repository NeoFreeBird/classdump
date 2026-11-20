//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterScribeSystem_h
#define TFNTwitterScribeSystem_h
@import Foundation;

#include "TFNTwitterScribeLifecycleObserver.h"
#include "TFNTwitterScribeWriter.h"
#include "TLTScribeBackgroundTaskManager.h"

@class NSObject, TFSScribe, TFSTwitterScribeErrorHandler;

@interface TFNTwitterScribeSystem : NSObject {
    /* instance variables */
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; struct atomic_flag { _Atomic _Bool _Value; } predicate; } _memberTransientDispatchOnceToken;
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; struct atomic_flag { _Atomic _Bool _Value; } predicate; } _scribeWriterMemberTransientDispatchOnceToken;
}

@property (retain, nonatomic) TFSScribe *scribeService;
@property (retain, nonatomic) TFSTwitterScribeErrorHandler *errorHandler;
@property (retain, nonatomic) TFNTwitterScribeLifecycleObserver *lifecycleObserver;
@property (retain, nonatomic) TFNTwitterScribeWriter *scribeWriter;
@property (retain, nonatomic) TLTScribeBackgroundTaskManager *backgroundTaskManager;

/* class methods */
+ (id)compactPersistenceSwitch;
+ (id)flushAllPersistenceSwitch;
+ (id)sharedSystem;
+ (void)setSharedSystemClientProvider:(id)provider;

/* instance methods */
- (id)clientName;
- (id)init;
- (void)dealloc;
- (void)_purgeScribeDirectoryIfNecessary;
- (void)_purgeScribeDirectory;
- (void)_openServiceIfNecessary;
- (void)_configureSessionIdProvider;
- (void)_openService;
- (void)_invalidateScribeWriter;
- (void)_deviceFeatureSwitchesDidChange:(id)change;

@end

#endif /* TFNTwitterScribeSystem_h */
