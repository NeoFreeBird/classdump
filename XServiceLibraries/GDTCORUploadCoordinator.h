//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCORUploadCoordinator_h
#define GDTCORUploadCoordinator_h
@import Foundation;

#include "GDTCORLifecycleProtocol-Protocol.h"
#include "GDTCORRegistrar.h"
#include "OS_dispatch_source-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GDTCORUploadCoordinator : NSObject <GDTCORLifecycleProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *coordinationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) unsigned long long timerInterval;
@property (readonly, nonatomic) unsigned long long timerLeeway;
@property (retain, nonatomic) GDTCORRegistrar *registrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)forceUploadForTarget:(long long)target;
- (void)startTimer;
- (void)stopTimer;
- (void)uploadTargets:(id)targets conditions:(long long)conditions;
- (void)signalToStoragesToCheckExpirations;
- (id)storageForTarget:(id)target;
- (long long)uploadConditions;
- (void)appWillForeground:(id)foreground;
- (void)appWillBackground:(id)background;
- (void)appWillTerminate:(id)terminate;

@end

#endif /* GDTCORUploadCoordinator_h */
