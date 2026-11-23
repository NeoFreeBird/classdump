//
#ifndef _TtC14GrokMarkdownUI28MarkdownStreamingTextUpdater_h
#define _TtC14GrokMarkdownUI28MarkdownStreamingTextUpdater_h
@import Foundation;

@class Swift.Bool, _$sSS4text_Sb10coalescingySS_yyctc6rendertSg, _$sSSSg, _$sSd, _$sSdyc, _$sSi, _$syycSd_yyctc, _$syycSg, _TtCs12_SwiftObject;

@interface GrokMarkdownUI.MarkdownStreamingTextUpdater : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Double interval;
    Swift.String? renderedText;
    Swift.Int renderCount;
    () -> Swift.Double now;
    (Swift.Double, () -> ()) -> () -> () schedule;
    (text: Swift.String, coalescing: Swift.Bool, render: (Swift.String, () -> ()) -> ())? pending;
    Swift.Bool isRendering;
    Swift.Int renderGeneration;
    Swift.Double lastRenderStart;
    (() -> ())? cancelScheduled;
}

@end

#endif /* _TtC14GrokMarkdownUI28MarkdownStreamingTextUpdater_h */
