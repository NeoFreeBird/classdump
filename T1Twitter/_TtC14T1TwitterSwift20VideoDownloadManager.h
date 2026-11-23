//
#ifndef _TtC14T1TwitterSwift20VideoDownloadManager_h
#define _TtC14T1TwitterSwift20VideoDownloadManager_h
@import Foundation;

#include "TFSProgressCenterObserver-Protocol.h"
#include "TNUSimpleDownloadDelegate-Protocol.h"
#include "TULProgressLiveActivityControllerObserver-Protocol.h"

@class NSObject, _$s20ProgressLiveActivity0abC10ControllerCMn ?, _$sSDySS T1TwitterSwift.VideoDownloadManager.ActiveDownload, _$sSa -> _$s10Foundation3URLVMn, _$sSo11NSHashTableCyyXlG, _$sSo26TNUSimpleDownloadDiskCacheC;

@interface T1TwitterSwift.VideoDownloadManager : NSObject <TFSProgressCenterObserver, TULProgressLiveActivityControllerObserver, TNUSimpleDownloadDelegate> { // (Swift)
    /* instance variables */
    __C.TNUSimpleDownloadDiskCache downloadDiskCache;
    __C.NSHashTable<Swift.AnyObject> observers;
    Swift.Dictionary empty-list Swift.String T1TwitterSwift.VideoDownloadManager.ActiveDownload activeDownloads;
    nominal type descriptor for ProgressLiveActivity.ProgressLiveActivityController ? liveActivity;
    Swift.Array -> nominal type descriptor for Foundation.URL pendingFiles;
}

/* instance methods */
- (void)progressCenter:(id)center didUpdateProgress:(id)progress;
- (void)progressLiveActivityControllerDidEnd:(id)end;
- (void)download:(id)download didUpdateProgress:(float)progress;
- (void)dealloc;
- (void)applicationDidBecomeActive;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift20VideoDownloadManager_h */
