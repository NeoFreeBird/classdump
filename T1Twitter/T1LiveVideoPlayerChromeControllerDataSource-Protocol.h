//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveVideoPlayerChromeControllerDataSource_Protocol_h
#define T1LiveVideoPlayerChromeControllerDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveVideoPlayerChromeControllerDataSource <NSObject>

@required

/* required instance methods */
- (_Bool)liveVideoPlayerChromeController:(id)controller shouldSetNavigationBarToHidden:(_Bool)hidden;
- (_Bool)liveVideoPlayerChromeController:(id)controller shouldSetPlayerControlsToHidden:(_Bool)hidden;
- (_Bool)liveVideoPlayerChromeControllerWillShowDockButtonTooltip:(id)tooltip;
- (void)liveVideoPlayerChromeController:(id)controller setStatusBarHidden:(_Bool)hidden;
- (void)liveVideoPlayerChromeController:(id)controller setNavigationBarAlpha:(double)alpha;
- (void)liveVideoPlayerChromeController:(id)controller setNavigationBarHidden:(_Bool)hidden;
- (void)liveVideoPlayerChromeController:(id)controller setPlayerControlsAlpha:(double)alpha;
- (void)liveVideoPlayerChromeController:(id)controller setPlayerControlsHidden:(_Bool)hidden;

@optional

@end

#endif /* T1LiveVideoPlayerChromeControllerDataSource_Protocol_h */
