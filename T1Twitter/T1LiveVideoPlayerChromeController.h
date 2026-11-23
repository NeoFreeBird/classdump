//
#ifndef T1LiveVideoPlayerChromeController_h
#define T1LiveVideoPlayerChromeController_h
@import Foundation;

#include "T1LiveVideoPlayerChromeControllerDataSource-Protocol.h"

@class NSObject, TFSTimer, UITapGestureRecognizer;

@interface T1LiveVideoPlayerChromeController : NSObject

@property (nonatomic) _Bool navigationBarHidden;
@property (nonatomic) _Bool playerControlsHidden;
@property (retain, nonatomic) TFSTimer *controlsAutoHideTimer;
@property (weak, nonatomic) id <T1LiveVideoPlayerChromeControllerDataSource> dataSource;
@property (readonly, nonatomic) UITapGestureRecognizer *toggleVisibilityTapGestureRecognizer;
@property (nonatomic) _Bool shouldStopScheduleAutoHideControlTimer;

/* instance methods */
- (id)initWithDataSource:(id)source;
- (id)init;
- (void)dealloc;
- (void)_t1_tapGestureRecognized:(id)recognized;
- (void)_t1_voiceOverStatusDidChange:(id)change;
- (void)setNavigationBarHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)setPlayerControlsHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)_t1_fadeViewsToHidden:(_Bool)hidden animated:(_Bool)animated alphaChangeBlock:(id /* block */)block permanentlyChangeVisibilityBlock:(id /* block */)block additionalAnimations:(id /* block */)animations;
- (void)_t1_fadeViewsToAlpha:(double)alpha withAlphaChangeBlock:(id /* block */)block animated:(_Bool)animated additionalAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)scheduleControlsAutoHide;
- (void)_t1_controlsAutoHideTimerDidFire;
- (void)cancelControlsAutoHide;
- (_Bool)isNavigationBarHidden;
- (_Bool)isPlayerControlsHidden;

@end

#endif /* T1LiveVideoPlayerChromeController_h */
