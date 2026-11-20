//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8BrazeKit14BrazeViewStore_h
#define _TtC8BrazeKit14BrazeViewStore_h
@import Foundation;

@class BrazeKit.AsyncViewStore BrazeKit.Core.State BrazeKit.Core.Action ?, BrazeKit.AsyncViewStore BrazeKit.Core.State BrazeKit.Core.Action _$sGyc ->, BrazeKit.Atomic Swift.Bool, BrazeKit.Braze _$sSgyc, BrazeKit.Braze.Logger, _$sSa -> BrazeKit.Core.Action ?, _$sSh -> NanoCombine.Cancellable, _$sSo15NSRecursiveLockC, _TtCs12_SwiftObject;

@interface BrazeKit.BrazeViewStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    BrazeKit.AsyncViewStore BrazeKit.Core.State BrazeKit.Core.Action ? viewStore;
    BrazeKit.Braze.Logger logger;
    BrazeKit.Atomic Swift.Bool _shouldBufferDebuggerLogs;
    BrazeKit.Braze _$sSgyc braze;
    BrazeKit.AsyncViewStore BrazeKit.Core.State BrazeKit.Core.Action _$sGyc -> createViewStore;
    Swift.Set -> NanoCombine.Cancellable cancellables;
    Swift.Array -> BrazeKit.Core.Action ? debuggerLogsBuffer;
    __C.NSRecursiveLock enabledLock;
}

@end

#endif /* _TtC8BrazeKit14BrazeViewStore_h */
