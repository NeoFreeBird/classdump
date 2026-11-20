//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC22SuperAwesomeVideoCache12SAVCacheTask_h
#define _TtC22SuperAwesomeVideoCache12SAVCacheTask_h
@import Foundation;

@class NSObject, SuperAwesomeVideoCache.SAVCacheItem ?, SuperAwesomeVideoCache.SAVCacheTask.Source, SuperAwesomeVideoCache.SAVCacheTaskDelegate ?, TAVCache.TAVCacheFetcherTask ?, _$s7Combine9PublishedVMn SuperAwesomeVideoCache.SAVCacheTask.State, _$sSS, _$sSo16TFNScribeContext_pSg;

@interface SuperAwesomeVideoCache.SAVCacheTask : NSObject { // (Swift)
    /* instance variables */
    Swift.String cacheItemID;
    nominal type descriptor for Combine.Published SuperAwesomeVideoCache.SAVCacheTask.State _state;
    __C.TFNScribeContext? currentScribeContext;
    SuperAwesomeVideoCache.SAVCacheTask.Source source;
    SuperAwesomeVideoCache.SAVCacheTaskDelegate ? delegate;
    SuperAwesomeVideoCache.SAVCacheItem ? cacheItem;
    TAVCache.TAVCacheFetcherTask ? videoFetcherTask;
    __C.TFNScribeContext? fetcherScribeContext;
}

@property (nonatomic, readonly) _Bool isZombie;
@property (nonatomic, readonly) _Bool isDownloadStartPossible;
@property (nonatomic, readonly) _Bool isRemovePossible;

/* instance methods */
- (void)startLoadingWithModelContext:(id)context;
- (_Bool)remove:(id *)remove;
- (id)init;

@end

#endif /* _TtC22SuperAwesomeVideoCache12SAVCacheTask_h */
