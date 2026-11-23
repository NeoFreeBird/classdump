//
#ifndef TFSScribePersistenceStrategy_Protocol_h
#define TFSScribePersistenceStrategy_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSLogger-Protocol.h"

@protocol TFSScribePersistenceStrategy <NSObject>

@required

@property (readonly, copy, nonatomic) id /* block */ errorLogger;
@property (readonly, nonatomic) id <TFSLogger> debugLogger;
@property (copy) id /* block */ didEnqueueEvent;
@property _Bool debugEnabled;

/* class methods */
+ (id)new;

/* required instance methods */
- (id)init;
- (id)initWithStoreURL:(id)url applicationLink:(id)link shelfLife:(double)life errorLogger:(id /* block */)logger debugLogger:(id)logger;
- (_Bool)isOpen;
- (void)openWithStartBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)closeWithStartBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)flushGroups:(id)groups fetchLimit:(unsigned long long)limit batchSize:(unsigned long long)size eventsHandler:(id)handler impressionsHandler:(id)handler didFlushBatch:(id /* block */)batch completion:(id /* block */)completion;
- (void)deleteGroups:(id)groups completion:(id /* block */)completion;
- (void)enqueueEvent:(id)event timestamp:(id)timestamp;
- (void)enqueueCompletionBlock:(id /* block */)block;
- (void)enqueueImpression:(id)impression eventName:(id)name query:(id)query group:(id)group timestamp:(id)timestamp;
- (void)clearScribeDatabase;

@optional

@end

#endif /* TFSScribePersistenceStrategy_Protocol_h */
