//
#ifndef TFNTooltipViewDelegate_Protocol_h
#define TFNTooltipViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTooltipViewDelegate <NSObject>

@required

/* required instance methods */
- (void)tooltipViewDidTap:(id)tap;

@optional

/* optional instance methods */
- (void)tooltipViewWillShow:(id)show;
- (void)tooltipViewDidShow:(id)show;
- (void)tooltipViewWillDismiss:(id)dismiss;
- (void)tooltipViewDidDismiss:(id)dismiss;

@end

#endif /* TFNTooltipViewDelegate_Protocol_h */
