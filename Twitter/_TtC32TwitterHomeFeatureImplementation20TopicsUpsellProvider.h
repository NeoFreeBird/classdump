//
#ifndef _TtC32TwitterHomeFeatureImplementation20TopicsUpsellProvider_h
#define _TtC32TwitterHomeFeatureImplementation20TopicsUpsellProvider_h
@import Foundation;

@class Swift.Bool, TwitterHomeFeatureImplementation.TopicsEducationVideoPrefetcher, TwitterHomeFeatureImplementation.TopicsUpsellLottieState, _$sSiSg, _$sSo16UIViewControllerCSg, _$sSo17TFNTwitterAccountC, _$syycSg, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.TopicsUpsellProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    TwitterHomeFeatureImplementation.TopicsEducationVideoPrefetcher videoPrefetcher;
    Swift.Bool shouldShowTab;
    (() -> ())? onImpression;
    (() -> ())? onExploreTopics;
    (() -> ())? onHowItWorks;
    TwitterHomeFeatureImplementation.TopicsUpsellLottieState lottieState;
    __C.UIViewController? cachedViewController;
    Swift.Int? unreadIndicatorIgnoreLimit;
    Swift.Bool hasShownUnreadIndicatorThisSession;
}

@end

#endif /* _TtC32TwitterHomeFeatureImplementation20TopicsUpsellProvider_h */
