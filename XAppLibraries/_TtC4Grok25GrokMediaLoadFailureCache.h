//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok25GrokMediaLoadFailureCache_h
#define _TtC4Grok25GrokMediaLoadFailureCache_h
@import Foundation;

@class _$s10Foundation4DateVMn _$syc, _$sSDySS Grok.GrokMediaLoadFailureCache.Entry, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface Grok.GrokMediaLoadFailureCache : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String Grok.GrokMediaLoadFailureCache.Entry entries;
    __C.NSLock lock;
    nominal type descriptor for Foundation.Date _$syc now;
}

@end

#endif /* _TtC4Grok25GrokMediaLoadFailureCache_h */
