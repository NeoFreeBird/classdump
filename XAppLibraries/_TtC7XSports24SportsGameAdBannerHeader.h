//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24SportsGameAdBannerHeader_h
#define _TtC7XSports24SportsGameAdBannerHeader_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsHubAdBannerView, XSports.SportsHubAdSlotLoader, _$sSo16TIPImagePipelineCSg, _$syycSg;

@interface XSports.SportsGameAdBannerHeader : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onHeightChange;
    Swift.Bool isOnScreen;
    XSports.SportsHubAdBannerView bannerView;
    XSports.SportsHubAdSlotLoader adSlots;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsHubAdSlot function type (escaping) onDisplay;
    XSports.SportsHubAdSlot function type (escaping) onSelect;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports24SportsGameAdBannerHeader_h */
