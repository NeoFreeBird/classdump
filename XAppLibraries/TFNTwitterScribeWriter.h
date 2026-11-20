//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterScribeWriter_h
#define TFNTwitterScribeWriter_h
@import Foundation;

#include "TFNTwitterScribeWriter-Protocol.h"
#include "TLTScribeBackgroundTaskManager.h"

@class NSObject, NSString, TFSTwitterScribeWriter;
@protocol OS_dispatch_queue;

@interface TFNTwitterScribeWriter : TFSTwitterScribeWriter <TFNTwitterScribeWriter>

@property (readonly, nonatomic) TLTScribeBackgroundTaskManager *backgroundTaskManager;
@property (nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *statusBarOrientationSynchronizationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScribe:(id)scribe clientName:(id)name backgroundTaskManager:(id)manager;
- (id)init;
- (void)enqueueEvent:(id)event;
- (void)enqueueImpression:(id)impression eventName:(id)name query:(id)query group:(id)group;
- (id)eventSerializerForParameters:(id)parameters group:(id)group;
- (id)parametersForEvent:(id)event parameters:(id)parameters group:(id)group;
- (void)_wrapInBackgroundTask:(id /* block */)task;
- (void)_statusBarOrientationDidChange:(id)change;

@end

#endif /* TFNTwitterScribeWriter_h */
