//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VideoDownloadViewModel_h
#define T1VideoDownloadViewModel_h
@import Foundation;

#include "_TtP14T1TwitterSwift17T1VideoDownloader_-Protocol.h"

@class NSObject;

@interface T1VideoDownloadViewModel : NSObject <T1TwitterSwift.T1VideoDownloader> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *endDownloadSaveDelay;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *fromViewController;
    NSNumber"16@0:8 *videoURL;
    NSNumber"16@0:8 *state;
    NSNumber"16@0:8 *stateUpdatedCb;
}

/* class methods */
+ (id)makeVideDownloaderWithAccount:(id)account fromViewController:(id)controller mediaEntity:(id)entity statusViewModel:(id)model;

/* instance methods */
- (id)initWithVideoURL:(id)url account:(id)account fromViewController:(id)controller endDownloadSaveDelay:(double)delay;
- (void)tappedDownload;
- (id)init;

@end

#endif /* T1VideoDownloadViewModel_h */
