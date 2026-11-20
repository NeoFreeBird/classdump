//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok17GrokFinanceWidget_h
#define _TtC4Grok17GrokFinanceWidget_h
@import Foundation;

@class Grok.GrokWidgetDisplayType, _$sSSSg, _$sSa -> Grok.GrokFinanceChartData ?, _$sSdSg, _TtCs12_SwiftObject;

@interface Grok.GrokFinanceWidget : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokWidgetDisplayType displayType;
    Swift.String? stockTicker;
    Swift.String? stockCompanyName;
    Swift.String? currency;
    Swift.Double? price;
    Swift.Double? pricePercentageChange1D;
    Swift.Array -> Grok.GrokFinanceChartData ? priceChartData;
}

@end

#endif /* _TtC4Grok17GrokFinanceWidget_h */
