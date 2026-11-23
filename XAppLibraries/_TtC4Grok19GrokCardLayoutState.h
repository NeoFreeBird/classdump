//
#ifndef _TtC4Grok19GrokCardLayoutState_h
#define _TtC4Grok19GrokCardLayoutState_h
@import Foundation;

@class Grok.CardPreviewValues ?, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$sSSSg, _$sSa -> __C.CGRect, _$sSaySSG, _$sSd, _$sSo18NSAttributedStringCSg, _TtCs12_SwiftObject, __C.CGRect, __C.CGRect ?, __C.CGSize;

@interface Grok.GrokCardLayoutState : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.CardPreviewValues ? cardPreviewValues;
    Swift.String promptText;
    [Swift.String] promptMediaUrls;
    Swift.String metadataLabelText;
    Swift.String grokText;
    __C.NSAttributedString? grokAttributedText;
    [Swift.String] grokMediaUrls;
    Swift.String? askGrokYourselfText;
    [Swift.String] deepSearchFaviconImageUrls;
    Swift.String? deepSearchItemCountText;
    Swift.Bool askGrokYourselfBottomRowVisible;
    __C.CGRect topContainerFrame;
    __C.CGRect mainContentContainerFrame;
    __C.CGRect bottomRowContainerFrame;
    __C.CGRect promptLabelFrame;
    __C.CGRect ? promptImageViewFrame;
    __C.CGRect metadataLabelFrame;
    __C.CGRect grokAttributionFrame;
    __C.CGRect grokResponseFrame;
    __C.CGRect ? grokImageViewFrame;
    __C.CGRect bottomRowTopBorderViewFrame;
    __C.CGRect grokIconBottomRowImageViewFrame;
    __C.CGRect askGrokYourselfLabelFrame;
    __C.CGRect arrowImageViewFrame;
    Swift.Array -> __C.CGRect deepSearchFaviconFrames;
    __C.CGRect deepSearchItemCountLabelFrame;
    __C.CGSize size;
    nominal type descriptor for CoreGraphics.CGFloat padding;
    Swift.Double cardPreviewBottomHorizontalSpacing;
    Swift.Double cardPreviewTextSize;
    Swift.Double cardPreviewProfilePicLength;
    Swift.Double cardPreviewMaxHeight;
    Swift.Double grokAnalysisLabelHeight;
}

@end

#endif /* _TtC4Grok19GrokCardLayoutState_h */
