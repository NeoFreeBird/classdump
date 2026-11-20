//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNManagedTooltipDisplayState_h
#define TFNManagedTooltipDisplayState_h
@import Foundation;

#include "TFNTooltipTarget.h"

@class NSObject, UIView;

@interface TFNManagedTooltipDisplayState : NSObject

@property (retain, nonatomic) TFNTooltipTarget *lastPresentedTarget;
@property (weak, nonatomic) UIView *lastPresentedInView;

/* instance methods */

@end

#endif /* TFNManagedTooltipDisplayState_h */
