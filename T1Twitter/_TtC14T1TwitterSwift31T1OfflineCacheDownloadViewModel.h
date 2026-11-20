//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift31T1OfflineCacheDownloadViewModel_h
#define _TtC14T1TwitterSwift31T1OfflineCacheDownloadViewModel_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.VideoSettingsDownloadViewModelState, _$s22SuperAwesomeVideoCache12SAVCacheTaskCMn, _$s7Combine14AnyCancellableCMn ?, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$syycSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.T1OfflineCacheDownloadViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? fromViewController;
    __C.TFNTwitterAccount account;
    nominal type descriptor for Combine.AnyCancellable ? subscriber;
    nominal type descriptor for SuperAwesomeVideoCache.SAVCacheTask cacheTask;
    Swift.Bool isCompleted;
    Swift.Bool isRemovable;
    (() -> ())? updateBlock;
    T1TwitterSwift.VideoSettingsDownloadViewModelState state;
    (() -> ())? stateUpdatedCb;
}

@end

#endif /* _TtC14T1TwitterSwift31T1OfflineCacheDownloadViewModel_h */
