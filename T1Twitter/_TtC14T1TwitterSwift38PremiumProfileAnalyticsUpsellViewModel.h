//
#ifndef _TtC14T1TwitterSwift38PremiumProfileAnalyticsUpsellViewModel_h
#define _TtC14T1TwitterSwift38PremiumProfileAnalyticsUpsellViewModel_h
@import Foundation;

@class NSObject, T1TwitterSwift.ProfileAnalyticsUpsellView.ViewModel, _$sSo17TFNTwitterAccountC, _$sSo7UIImageCSg, _$syycSg;

@interface T1TwitterSwift.PremiumProfileAnalyticsUpsellViewModel : NSObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.UIImage? bodyIcon;
    (() -> ())? onAction;
    (() -> ())? onDismiss;
    T1TwitterSwift.ProfileAnalyticsUpsellView.ViewModel analyticsViewModel;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift38PremiumProfileAnalyticsUpsellViewModel_h */
