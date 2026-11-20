//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24SportsHubSpotlightScribe_h
#define _TtC7XSports24SportsHubSpotlightScribe_h
@import Foundation;

@class Swift.Bool, _$sSDyS2SG, _$sSS, _$sSa -> XSports.SportsHubSpotlightScribe.Event, _$sSa -> XSports.SportsHubSpotlightScribe.Linger, _$sSaySo7NSTimerCG, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg, _$sSo7NSTimerCSg, _TtCs12_SwiftObject;

@interface XSports.SportsHubSpotlightScribe : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFSTwitterLegacyScribeLogMethods? logger;
    Swift.String page;
    Swift.String component;
    [Swift.String : Swift.String] item;
    Swift.Array -> XSports.SportsHubSpotlightScribe.Event appearEvents;
    Swift.Array -> XSports.SportsHubSpotlightScribe.Event disappearEvents;
    Swift.Array -> XSports.SportsHubSpotlightScribe.Linger lingers;
    Swift.Array -> XSports.SportsHubSpotlightScribe.Event videoAppearEvents;
    Swift.Array -> XSports.SportsHubSpotlightScribe.Event videoDisappearEvents;
    Swift.Array -> XSports.SportsHubSpotlightScribe.Linger videoLingers;
    Swift.Bool isVisible;
    Swift.Bool isVideoVisible;
    Swift.Bool isBannerShowing;
    Swift.Bool didScheduleLingers;
    Swift.Bool didScheduleVideoLingers;
    [__C.NSTimer] lingerTimers;
    [__C.NSTimer] videoLingerTimers;
    __C.NSTimer? collapsedImpressionTimer;
}

@end

#endif /* _TtC7XSports24SportsHubSpotlightScribe_h */
