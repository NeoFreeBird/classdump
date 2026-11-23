//
#ifndef TFNFloatingExpandingButton_h
#define TFNFloatingExpandingButton_h
@import Foundation;

#include "TFNExpandingButton.h"

@interface TFNFloatingExpandingButton : TFNExpandingButton

/* class methods */
+ (void)_tfn_forceEndIgnoringInteractionEvents:(id)events;

/* instance methods */
- (void)expandAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)collapseAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)_tfn_scheduleForceEndIgnoringInteractionEventsTimerWithDebugInfo:(id)info;

@end

#endif /* TFNFloatingExpandingButton_h */
