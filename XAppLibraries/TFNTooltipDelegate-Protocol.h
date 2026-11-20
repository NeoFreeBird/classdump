//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
