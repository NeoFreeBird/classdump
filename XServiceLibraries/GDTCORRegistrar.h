//
#ifndef GDTCORRegistrar_h
#define GDTCORRegistrar_h
@import Foundation;

#include "GDTCORLifecycleProtocol-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GDTCORRegistrar : NSObject <GDTCORLifecycleProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrarQueue;
@property (readonly) NSMutableDictionary *targetToUploader;
@property (readonly) NSMutableDictionary *targetToStorage;
@property (readonly) NSMutableDictionary *targetToMetricsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerUploader:(id)uploader target:(long long)target;
- (void)registerStorage:(id)storage target:(long long)target;
- (void)registerMetricsController:(id)controller target:(long long)target;
- (void)setMetricsControllerAsStorageDelegateForTarget:(long long)target;
- (void)appWillBackground:(id)background;
- (void)appWillForeground:(id)foreground;
- (void)appWillTerminate:(id)terminate;

@end

#endif /* GDTCORRegistrar_h */
