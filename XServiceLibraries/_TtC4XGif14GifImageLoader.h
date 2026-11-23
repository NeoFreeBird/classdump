//
#ifndef _TtC4XGif14GifImageLoader_h
#define _TtC4XGif14GifImageLoader_h
@import Foundation;

@class DispatchQueue, Swift.Bool, _$sSayyycG, _$sSi, _$sSo12NSURLSessionC, _$sSo33OS_dispatch_source_memorypressure_p, _$sSo6NSLockC, _$sSo7NSCacheCySo5NSURLCSo7UIImageCG, _TtCs12_SwiftObject;

@interface XGif.GifImageLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSCache<__C.NSURL, __C.UIImage> cache;
    __C.NSURLSession session;
    DispatchQueue decodeQueue;
    __C.NSLock stateLock;
    Swift.Int maxConcurrentInflightRequests;
    Swift.Int inflightCount;
    [() -> ()] pendingStarts;
    Swift.Bool prefersStillImageValue;
    __C.OS_dispatch_source_memorypressure memoryPressureSource;
}

@end

#endif /* _TtC4XGif14GifImageLoader_h */
