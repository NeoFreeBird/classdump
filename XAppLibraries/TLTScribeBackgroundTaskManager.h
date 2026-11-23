//
#ifndef TLTScribeBackgroundTaskManager_h
#define TLTScribeBackgroundTaskManager_h
@import Foundation;

#include "TLTBackgroundTaskManager.h"

@class NSMutableDictionary, NSObject, TFSDatabaseUIApplicationLink;
@protocol OS_dispatch_queue;

@interface TLTScribeBackgroundTaskManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) TLTBackgroundTaskManager *backgroundTaskManager;
@property (readonly, nonatomic) TFSDatabaseUIApplicationLink *databaseApplicationLink;
@property (readonly, nonatomic) NSMutableDictionary *tokenHandleMap;

/* instance methods */
- (id)init;
- (id)initWithApplication:(id)application;
- (id)tokenForBackgroundTask;
- (void)registerFlushBackgroundToken:(id)token;
- (void)endBackgroundTaskForToken:(id)token;
- (void)scribeFlushed:(id)flushed;
- (id)_internal_createToken;
- (void)_internal_registerToken:(id)token;
- (void)_internal_removeToken:(id)token;

@end

#endif /* TLTScribeBackgroundTaskManager_h */
