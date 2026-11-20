//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8TFSModel15DependencyGraph_h
#define _TtC8TFSModel15DependencyGraph_h
@import Foundation;

#include "TFSModelCacheScribing-Protocol.h"
#include "_TtC8TFSModel14DependencyNode.h"

@class DispatchQueue, TFSModel.PendingStatesMap, TFSModel.TFSModelDebugLogger ?, TFSModel.WeakMap TFSModel.ModelIdentifier TFSModel.DependencySource, TFSModel.WeakMap _$sySS TFSModel.AssimilationContextNode, TFSModel23DependencyGraphScribing_pSgXw, TFSUtilitiesSwift.AtomicProperty _$sSo13TFSModelCacheC, _$s8Dispatch0A11SpecificKeyCMn _$syt, _$sSD -> TFSModel.ModelIdentifier TFSModel.DependencySink, _$sSD -> _$s10Foundation4UUIDVMn TFSModel.DependencySink, _$sSh -> TFSModel.CacheMissNode, _$sSh -> TFSModel.DependencySink, _$sSh -> TFSModel.DependencySource, _$sSh -> TFSModel.ModelIdentifier;

@interface TFSModel.DependencyGraph : TFSModel.DependencyNode <TFSModelCacheScribing> { // (Swift)
    /* instance variables */
    DispatchQueue graphQueue;
    nominal type descriptor for Dispatch.DispatchSpecificKey () graphQueueKey;
    TFSModel.WeakMap TFSModel.ModelIdentifier TFSModel.DependencySource modelSourcesMap;
    TFSModel.WeakMap  empty-list Swift.String TFSModel.AssimilationContextNode assimilationContextsMap;
    TFSModel.PendingStatesMap pendingStatesMap;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID TFSModel.DependencySink nodeSinks;
    Swift.Set -> TFSModel.DependencySink sinksNeedingUpdate;
    Swift.Dictionary -> TFSModel.ModelIdentifier TFSModel.DependencySink sinksAwaitingPendingState;
    Swift.Set -> TFSModel.ModelIdentifier modelIdentifiersNeedingUpdate;
    Swift.Set -> TFSModel.ModelIdentifier modelIdentifiersLookupScheduled;
    Swift.Set -> TFSModel.DependencySource assimilatedSources;
    TFSUtilitiesSwift.AtomicProperty __C.TFSModelCache cacheStorage;
    DispatchQueue cacheQueue;
    DispatchQueue cacheMissQueue;
    Swift.Set -> TFSModel.CacheMissNode cacheMissNodes;
    TFSModel.TFSModelDebugLogger ? logger;
    TFSModel23DependencyGraphScribing_pSgXw scribeDelegate;
}

/* instance methods */
- (void)scribeCacheQueueClosedIfNeeded;
- (void)scribeSlowCacheFetchIfNeededWithStartTime:(double)time cacheKeys:(id)keys;
- (void)scribeSlowDiskFetchIfNeededWithStartTime:(double)time fetchKeys:(id)keys hitCount:(long long)count;
- (void)scribeSlowSQLFetchIfNeededWithStartTime:(double)time endTime:(double)time key:(id)key;
- (void)scribeSlowDecodeIfNeededWithStartTime:(double)time key:(id)key;

@end

#endif /* _TtC8TFSModel15DependencyGraph_h */
