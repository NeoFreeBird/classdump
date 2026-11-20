//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok14GrokModeButton_h
#define _TtC4Grok14GrokModeButton_h
@import Foundation;

@class Grok.GrokModeButtonStatus, Grok.GrokModeButtonType, _$sSS, _$sSSSg, _$sSaySSG, _TtCs12_SwiftObject;

@interface Grok.GrokModeButton : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    Grok.GrokModeButtonType type;
    Swift.String? iconName;
    Swift.String? label;
    [Swift.String] supportedModelIds;
    Grok.GrokModeButtonStatus freeStatus;
    Grok.GrokModeButtonStatus premiumStatus;
    Grok.GrokModeButtonStatus premiumPlusStatus;
}

@end

#endif /* _TtC4Grok14GrokModeButton_h */
