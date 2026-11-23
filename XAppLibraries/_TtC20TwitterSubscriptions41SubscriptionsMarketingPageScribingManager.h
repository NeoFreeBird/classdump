//
#ifndef _TtC20TwitterSubscriptions41SubscriptionsMarketingPageScribingManager_h
#define _TtC20TwitterSubscriptions41SubscriptionsMarketingPageScribingManager_h
@import Foundation;

@class TwitterSubscriptions.Clock, TwitterSubscriptions.EventScriber, TwitterSubscriptions.SubscriptionsMarketingPageEndOfSessionReasonType, _$sSdSg, _$sSi, _$sSiSg, _TtCs12_SwiftObject;

@interface TwitterSubscriptions.SubscriptionsMarketingPageScribingManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterSubscriptions.EventScriber scriber;
    TwitterSubscriptions.Clock clock;
    Swift.Double? sessionStartTime;
    Swift.Double? paywallPresentationStartTime;
    Swift.Int? paywallPresentationLatencyMs;
    Swift.Int logImpressionCounts;
    Swift.Int logExitCounts;
    TwitterSubscriptions.SubscriptionsMarketingPageEndOfSessionReasonType endOfSessionReason;
}

@end

#endif /* _TtC20TwitterSubscriptions41SubscriptionsMarketingPageScribingManager_h */
