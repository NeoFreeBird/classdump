//
#ifndef _TtC7XSports12SportsScribe_h
#define _TtC7XSports12SportsScribe_h
@import Foundation;

@class Swift.Bool, XSports.SportsScribe.Components, XSports.SportsScribe.DwellSpan ?, XSports.SportsScribeContext, _$sSS, _$sSSSg, _$sSaySo8NSObject_pG, _$sSdyc, _$sSh -> XSports.SportsScribe.ImpressionKey, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg, _TtCs12_SwiftObject;

@interface XSports.SportsScribe : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFSTwitterLegacyScribeLogMethods? logger;
    Swift.String page;
    XSports.SportsScribe.Components components;
    Swift.String? entrySourceRawValue;
    () -> Swift.Double uptime;
    Swift.Set -> XSports.SportsScribe.ImpressionKey loggedImpressions;
    XSports.SportsScribe.DwellSpan ? dwellSpan;
    Swift.Bool isSurfaceVisible;
    [__C.NSObject] observers;
    Swift.String activeSection;
    XSports.SportsScribeContext context;
}

@end

#endif /* _TtC7XSports12SportsScribe_h */
