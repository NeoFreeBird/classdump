//
#ifndef TFNTooltipDelegate_Protocol_h
#define TFNTooltipDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTooltipDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tooltipDidTap:(id)tap;
- (_Bool)tooltipShouldPresent:(id)present;
- (void)tooltipWillPresent:(id)present;
- (void)tooltipDidPresent:(id)present;
- (void)tooltipWillDismiss:(id)dismiss;
- (void)tooltipDidDismiss:(id)dismiss;

@end

#endif /* TFNTooltipDelegate_Protocol_h */
