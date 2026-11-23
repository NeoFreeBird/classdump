//
#ifndef TLTBackgroundTaskManager_h
#define TLTBackgroundTaskManager_h
@import Foundation;

#include "TFSBackgroundTaskHandleDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString, UIApplication;

@interface TLTBackgroundTaskManager : NSObject <TFSBackgroundTaskHandleDelegate>

@property (retain, nonatomic) UIApplication *application;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double endingDelay;
@property unsigned long long backgroundTaskID;
@property (copy) NSDictionary *tasks;
@property (nonatomic) unsigned long long endingCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_callExpirationHandlersInMainQueueWithTasks:(id)tasks;

/* instance methods */
- (id)init;
- (id)initWithApplication:(id)application name:(id)name;
- (id)initWithApplication:(id)application name:(id)name endingDelay:(double)delay;
- (void)dealloc;
- (id)backgroundTaskHandleWithName:(id)name expirationHandler:(id /* block */)handler;
- (void)_tlt_beginBackgroundTaskIfNecessary;
- (void)_tlt_accessQueue_commitBackgroundTaskIdentifier:(unsigned long long)identifier;
- (void)_tlt_accessQueue_endBackgroundTaskIfNecessary;
- (void)_tlt_removeHandle:(id)handle;
- (void)_tlt_accessQueue_removeHandle:(id)handle;
- (void)_applicationDidEnterBackground:(id)background;
- (void)_applicationWillEnterForeground:(id)foreground;
- (void)backgroundTaskHandleWillBeDeallocated:(id)deallocated;

@end

#endif /* TLTBackgroundTaskManager_h */
