//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok17FaviconImageCache_h
#define _TtC4Grok17FaviconImageCache_h
@import Foundation;

@class DispatchQueue, _$s10Foundation3URLVMn, _$sSo13NSFileManagerC, _$sSo7NSCacheCySo8NSStringCSo7UIImageCG, _TtCs12_SwiftObject;

@interface Grok.FaviconImageCache : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSCache<__C.NSString, __C.UIImage> memoryCache;
    __C.NSFileManager fileManager;
    nominal type descriptor for Foundation.URL diskCacheDirectory;
    DispatchQueue diskQueue;
}

@end

#endif /* _TtC4Grok17FaviconImageCache_h */
