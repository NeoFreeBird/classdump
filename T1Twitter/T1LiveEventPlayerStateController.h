//
#ifndef T1LiveEventPlayerStateController_h
#define T1LiveEventPlayerStateController_h
@import Foundation;

#include "T1LiveEventPlayerStateControllerDelegate-Protocol.h"

@class NSObject;

@interface T1LiveEventPlayerStateController : NSObject

@property (nonatomic) _Bool shouldAutoplayOnLandingPageVisible;
@property (nonatomic) _Bool shouldAutoplayOnMediaHeaderExpansion;
@property (nonatomic) _Bool landingPageVisible;
@property (nonatomic) _Bool playerDocked;
@property (nonatomic) _Bool presentedInFullscreen;
@property (nonatomic) _Bool playbackDesired;
@property (weak, nonatomic) id <T1LiveEventPlayerStateControllerDelegate> delegate;

/* instance methods */
- (id)init;
- (void)carouselEntryDidChange;
- (_Bool)isLandingPageVisible;
- (_Bool)isPlayerDocked;
- (_Bool)isPresentedInFullscreen;

@end

#endif /* T1LiveEventPlayerStateController_h */
