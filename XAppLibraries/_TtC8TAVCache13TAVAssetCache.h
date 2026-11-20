//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8TAVCache13TAVAssetCache_h
#define _TtC8TAVCache13TAVAssetCache_h
@import Foundation;

@class DispatchQueue, NSObject, _$sSDySS _$s10Foundation3URLVMn, _$sSo14NSPointerArrayC;

@interface TAVCache.TAVAssetCache : NSObject { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String nominal type descriptor for Foundation.URL URLMapping;
    DispatchQueue assetCache;
    __C.NSPointerArray observers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (id)getRecordURLForAssetURL:(id)url;

@end

#endif /* _TtC8TAVCache13TAVAssetCache_h */
