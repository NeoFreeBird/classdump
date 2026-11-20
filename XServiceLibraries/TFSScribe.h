//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribe_h
#define TFSScribe_h
@import Foundation;

#include "TFSScribePersistenceStrategy-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TFSScribe : NSObject

@property (readonly, nonatomic) id <TFSScribePersistenceStrategy> persistenceStrategy;
@property (readonly, nonatomic) id <TFSScribePersistenceStrategy> otherPersistenceStrategyToFlush;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property _Bool debugEnabled;
@property (readonly, nonatomic) _Bool usesFIFOPersistence;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)open;
- (void)openWithStartBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)close;
- (void)closeWithStartBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (_Bool)isOpen;
- (void)enqueueCompletionBlock:(id /* block */)block;
- (void)enqueueEvent:(id)event;
- (void)enqueueEvent:(id)event timestamp:(id)timestamp;
- (void)enqueueImpression:(id)impression eventName:(id)name query:(id)query group:(id)group;
- (void)enqueueImpression:(id)impression eventName:(id)name query:(id)query group:(id)group timestamp:(id)timestamp;
- (void)flushGroup:(id)group eventsHandler:(id)handler;
- (void)flushGroup:(id)group token:(id)token eventsHandler:(id)handler;
- (void)flushGroups:(id)groups eventsHandler:(id)handler;
- (void)flushGroups:(id)groups token:(id)token eventsHandler:(id)handler;
- (void)flushGroups:(id)groups token:(id)token eventsHandler:(id)handler impressionsHandler:(id)handler;
- (void)flushGroups:(id)groups token:(id)token fetchLimit:(unsigned long long)limit batchSize:(unsigned long long)size eventsHandler:(id)handler impressionsHandler:(id)handler;
- (void)deleteGroup:(id)group completion:(id /* block */)completion;
- (void)deleteGroups:(id)groups completion:(id /* block */)completion;
- (void)clearScribeDatabase;
- (_Bool)isDebugEnabled;

@end

#endif /* TFSScribe_h */
