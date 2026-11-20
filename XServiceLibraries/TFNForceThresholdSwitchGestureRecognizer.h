//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNForceThresholdSwitchGestureRecognizer_h
#define TFNForceThresholdSwitchGestureRecognizer_h
@import Foundation;

#include "TFNForceThresholdGestureRecognizer.h"

@interface TFNForceThresholdSwitchGestureRecognizer : TFNForceThresholdGestureRecognizer

@property (nonatomic) _Bool on;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)setEngaged:(_Bool)engaged;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)clearOnState;
- (_Bool)isOn;

@end

#endif /* TFNForceThresholdSwitchGestureRecognizer_h */
