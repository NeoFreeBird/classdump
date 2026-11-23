//
#ifndef _TtC14T1TwitterSwift25VideoHeaderViewController_h
#define _TtC14T1TwitterSwift25VideoHeaderViewController_h
@import Foundation;

#include "T1LiveVideoPlayerChromeControllerDataSource-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "_TtC14T1TwitterSwift25MediaHeaderViewController.h"

@class NSString, _$sSd, _$sSo16TAVScribeContextCSg, _$sSo17TFNTwitterAccountC, _$sSo33T1LiveVideoPlayerChromeControllerCSg, _$sSo9TAVPlayerCSg, __C.TAVTimeControlStatus ?;

@interface T1TwitterSwift.VideoHeaderViewController : T1TwitterSwift.MediaHeaderViewController <T1LiveVideoPlayerChromeControllerDataSource, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TAVPlayer? tavPlayer;
    __C.TAVScribeContext? tavSribeContext;
    __C.TAVTimeControlStatus ? tavPlayerTimeControlStatusBeforeAppResignsActive;
    __C.TAVTimeControlStatus ? lastObservedTimeControlState;
    __C.T1LiveVideoPlayerChromeController? $__lazy_storage_$_chromeController;
    Swift.Double preferredPeakBitrate;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) _Bool prefersStatusBarHidden;

/* instance methods */
- (_Bool)liveVideoPlayerChromeController:(id)controller shouldSetNavigationBarToHidden:(_Bool)hidden;
- (_Bool)liveVideoPlayerChromeController:(id)controller shouldSetPlayerControlsToHidden:(_Bool)hidden;
- (void)liveVideoPlayerChromeController:(id)controller setStatusBarHidden:(_Bool)hidden;
- (void)liveVideoPlayerChromeController:(id)controller setNavigationBarAlpha:(double)alpha;
- (void)liveVideoPlayerChromeController:(id)controller setNavigationBarHidden:(_Bool)hidden;
- (void)liveVideoPlayerChromeController:(id)controller setPlayerControlsAlpha:(double)alpha;
- (void)liveVideoPlayerChromeController:(id)controller setPlayerControlsHidden:(_Bool)hidden;
- (_Bool)liveVideoPlayerChromeControllerWillShowDockButtonTooltip:(id)tooltip;
- (void)appWillResignActive:(id)active;
- (void)appDidBecomeActive:(id)active;
- (void)dealloc;
- (void)viewDidLoad;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidAttachToPlayer:(id)player;

@end

#endif /* _TtC14T1TwitterSwift25VideoHeaderViewController_h */
