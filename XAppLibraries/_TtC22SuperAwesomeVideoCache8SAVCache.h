//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC22SuperAwesomeVideoCache8SAVCache_h
#define _TtC22SuperAwesomeVideoCache8SAVCache_h
@import Foundation;

@class DispatchQueue, NSObject, SuperAwesomeVideoCache.SAVCache.Items, SuperAwesomeVideoCache.SAVCacheProgressPresenter, Swift.Bool, TAVCache.TAVCacheFetcher, _$s10Foundation3URLVMn ?, _$s10Foundation3URLVMn _$scSg ->, _$sSD -> _$s10Foundation3URLVMn _$sSo24OS_dispatch_source_vnode_pGSg, _$sSDySS SuperAwesomeVideoCache.SAVCacheTask, _$sSS, _$sSo10NSMapTableCySo8NSStringC SuperAwesomeVideoCache.SAVCacheTask, _$sSo11TVPFeatures_pSg, _$sSo13TFNScribeSink_pSg;

@interface SuperAwesomeVideoCache.SAVCache : NSObject { // (Swift)
    /* instance variables */
    __C.TFNScribeSink? scribeSink;
    Swift.Bool isActivityProgressEnabled;
    SuperAwesomeVideoCache.SAVCacheProgressPresenter progressPresenter;
    DispatchQueue cacheQueue;
    SuperAwesomeVideoCache.SAVCache.Items internalItems;
    SuperAwesomeVideoCache.SAVCache.Items externalItems;
    __C.NSMapTable empty-list __C.NSString SuperAwesomeVideoCache.SAVCacheTask cachedTasks;
    Swift.Dictionary empty-list Swift.String SuperAwesomeVideoCache.SAVCacheTask executingTasks;
    Swift.String accountID;
    __C.TVPFeatures? features;
    TAVCache.TAVCacheFetcher videoFetcher;
    nominal type descriptor for Foundation.URL ? pathURL;
    Swift.Dictionary -> nominal type descriptor for Foundation.URL _$sSo24OS_dispatch_source_vnode_pGSg fileMonitors;
    nominal type descriptor for Foundation.URL _$scSg -> urlHandler;
}

@property (nonatomic, readonly) _Bool isEmpty;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)makeSAVCacheTaskWithStatusViewModel:(id)model selectedMediaEntity:(id)entity scribeContext:(id)context;
- (void)reconfigureForAccountIDIfNeeded:(id)needed features:(id)features isActivityProgressEnabled:(_Bool)enabled urlHandler:(id /* block */)handler;

@end

#endif /* _TtC22SuperAwesomeVideoCache8SAVCache_h */
