//
#ifndef _TtC4Grok26GrokStreamTextRevealDriver_h
#define _TtC4Grok26GrokStreamTextRevealDriver_h
@import Foundation;

@class Grok.GrokStreamTextRevealDriver.Decision, Grok.GrokStreamTextRevealDriver.DisplayLinkBox, Swift.Bool, _$sSS, _$sSbyc, _$sySScSg, _TtCs12_SwiftObject;

@interface Grok.GrokStreamTextRevealDriver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onShownText;
    Swift.Bool isCachedReplay;
    () -> Swift.Bool claimsReveal;
    Swift.Bool reducedMotion;
    Grok.GrokStreamTextRevealDriver.Decision decision;
    Swift.Bool hasEmitted;
    Swift.Bool isStreaming;
    Swift.String targetText;
    Swift.String displayedText;
    Grok.GrokStreamTextRevealDriver.DisplayLinkBox displayLink;
}

@end

#endif /* _TtC4Grok26GrokStreamTextRevealDriver_h */
