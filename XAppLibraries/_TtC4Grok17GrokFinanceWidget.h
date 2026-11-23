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
