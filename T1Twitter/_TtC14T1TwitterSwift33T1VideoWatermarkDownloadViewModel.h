//
#ifndef _TtC14T1TwitterSwift33T1VideoWatermarkDownloadViewModel_h
#define _TtC14T1TwitterSwift33T1VideoWatermarkDownloadViewModel_h
@import Foundation;

#include "_TtP14T1TwitterSwift17T1VideoDownloader_-Protocol.h"

@class T1TwitterSwift.VideoSettingsDownloadViewModelState, _$s10Foundation3URLVMn, _$s10Foundation3URLVMn ?, _$s14TFSTwitterCore18TwitterEntityMediaCMn, _$s5TAVUI19DownloadProgressingCMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo22TTACoreStatusViewModel_p, _$sSo8NSObject_pSg, _$syycSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.T1VideoWatermarkDownloadViewModel : Swift._SwiftObject <T1TwitterSwift.T1VideoDownloader> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    weak __C.UIViewController? fromViewController;
    nominal type descriptor for TFSTwitterCore.TwitterEntityMedia mediaEntity;
    __C.TTACoreStatusViewModel statusViewModel;
    nominal type descriptor for Foundation.URL videoURL;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? downloadTask;
    nominal type descriptor for TAVUI.DownloadProgressing ? progressItem;
    nominal type descriptor for Foundation.URL ? pendingPhotoLibraryFileURL;
    __C.NSObject? applicationActiveObserver;
    T1TwitterSwift.VideoSettingsDownloadViewModelState state;
    (() -> ())? stateUpdatedCb;
}

/* instance methods */
- (void)tappedDownload;

@end

#endif /* _TtC14T1TwitterSwift33T1VideoWatermarkDownloadViewModel_h */
