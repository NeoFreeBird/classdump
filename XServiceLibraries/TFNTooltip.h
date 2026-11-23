//
#ifndef TFNTooltip_h
#define TFNTooltip_h
@import Foundation;

#include "TFNManagedTooltipDisplayState.h"
#include "TFNTooltipView.h"

@class NSObject;
@protocol TFNTooltipDelegate;

@interface TFNTooltip : NSObject

@property (readonly, nonatomic) TFNTooltipView *tooltipView;
@property (weak, nonatomic) id <TFNTooltipDelegate> delegate;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) unsigned long long presentAnimationType;
@property (nonatomic) unsigned long long dismissAnimationType;
@property (nonatomic) double presentationDelay;
@property (nonatomic) double presentationArrowOffset;
@property (nonatomic) struct CGPoint { double x0; double x1; } positionOffset;
@property (nonatomic) _Bool tapAnywhereToDismiss;
@property (nonatomic) _Bool typeToDismiss;
@property (retain, nonatomic) TFNManagedTooltipDisplayState *displayState;

/* instance methods */
- (id)initWithTooltipView:(id)view delegate:(id)delegate;

@end

#endif /* TFNTooltip_h */
