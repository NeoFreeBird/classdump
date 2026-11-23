//
#ifndef TFSCacheRegistryEntry_h
#define TFSCacheRegistryEntry_h
@import Foundation;

#include "TFSCacheRegistrant-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TFSCacheRegistryEntry : NSObject

@property (readonly, weak, nonatomic) id <TFSCacheRegistrant> cache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *executorQueue;
@property (readonly, copy, nonatomic) id /* block */ executorBlock;

/* instance methods */
- (id)initWithRegistrant:(id)registrant executorQueue:(id)queue executorBlock:(id /* block */)block;
- (id)init;

@end

#endif /* TFSCacheRegistryEntry_h */
