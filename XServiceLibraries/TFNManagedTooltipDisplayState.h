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
