//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11TwitterHome11CursorCache_h
#define _TtC11TwitterHome11CursorCache_h
@import Foundation;

@class DispatchQueue, _$s10Foundation3URLVMn, _$s17TFSUtilitiesSwift16SignpostRecorderVMn ?, _$sSSSg, _TtCs12_SwiftObject;

@interface TwitterHome.CursorCache : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DispatchQueue topCursorDiskQueue;
    DispatchQueue bottomCursorDiskQueue;
    Swift.String? latestSavedTopCursorValue;
    Swift.String? latestSavedBottomCursorValue;
    nominal type descriptor for Foundation.URL topFileURL;
    nominal type descriptor for Foundation.URL bottomFileURL;
    nominal type descriptor for TFSUtilitiesSwift.SignpostRecorder ? topCursorCacheLoadFromDiskSignpostRecorder;
    nominal type descriptor for TFSUtilitiesSwift.SignpostRecorder ? bottomCursorCacheLoadFromDiskSignpostRecorder;
}

@end

#endif /* _TtC11TwitterHome11CursorCache_h */
