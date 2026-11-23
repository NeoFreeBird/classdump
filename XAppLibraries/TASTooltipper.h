//
#ifndef TASTooltipper_h
#define TASTooltipper_h
@import Foundation;

#include "TASTooltipperDelegate-Protocol.h"
#include "TFNTooltipDelegate-Protocol.h"

@class NSObject;

@interface TASTooltipper : NSObject <TFNTooltipDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 context;
    @40@0:8:16@24@32 registeredViews;
    @40@0:8:16@24@32 tutorialsQueue;
    @40@0:8:16@24@32 presentedTooltip;
}

@property (nonatomic, weak) id <TASTooltipperDelegate> delegate;
@property (nonatomic) _Bool shouldPresentTooltips;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)registerTooltipView:(id)view tutorial:(long long)tutorial;
- (void)presentTooltipForTutorial:(long long)tutorial text:(id)text;
- (void)presentTooltipForTutorial:(long long)tutorial text:(id)text preferredArrowDirection:(unsigned long long)direction;
- (void)dismissPresentedTooltip;
- (void)tooltipDidDismiss:(id)dismiss;
- (id)init;

@end

#endif /* TASTooltipper_h */
