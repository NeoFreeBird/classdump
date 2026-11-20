//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterSubscriptions31LegacySubscriptionFeatureConfig_h
#define _TtC20TwitterSubscriptions31LegacySubscriptionFeatureConfig_h
@import Foundation;

@class Swift.Bool, TwitterSubscriptions.SubscriptionsFeatureSwitches, _$s13TFSObservable15ObservableInputVMn TwitterSubscriptions.LegacySubscriptionFeatureConfig _$s_ -> TwitterSubscriptions.LegacySubscriptionFeatureConfigUpdateReason _$st, _$s13TFSObservable16ObservableEntityCMn TwitterSubscriptions.LegacySubscriptionFeatureConfig _$s_ -> TwitterSubscriptions.LegacySubscriptionFeatureConfigUpdateReason _$st, _$s13TFSObservable16ObservableEntityCMn TwitterSubscriptions.SubscriptionsFeatureSwitches ?, _$s13TFSObservable16ObservableEntityCMn _$sySa -> TwitterSubscriptions.Claim _$sGGSg, _$s13TFSObservable8ObserverCMn TwitterSubscriptions.SubscriptionsFeatureSwitches ?, _$s13TFSObservable8ObserverCMn _$sySa -> TwitterSubscriptions.Claim _$sGGSg, _$sSS, _$sSa -> TwitterSubscriptions.Claim, _TtCs12_SwiftObject;

@interface TwitterSubscriptions.LegacySubscriptionFeatureConfig : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool isFeatureEnabled;
    Swift.Array -> TwitterSubscriptions.Claim claims;
    TwitterSubscriptions.SubscriptionsFeatureSwitches featureSwitches;
    Swift.String featureName;
    nominal type descriptor for TFSObservable.ObservableEntity  empty-list Swift.Array -> TwitterSubscriptions.Claim _$sGGSg claimsObservable;
    nominal type descriptor for TFSObservable.Observer  empty-list Swift.Array -> TwitterSubscriptions.Claim _$sGGSg claimsObserver;
    nominal type descriptor for TFSObservable.ObservableEntity TwitterSubscriptions.SubscriptionsFeatureSwitches ? featureSwitchesObservable;
    nominal type descriptor for TFSObservable.Observer TwitterSubscriptions.SubscriptionsFeatureSwitches ? featureSwitchesObserver;
    nominal type descriptor for TFSObservable.ObservableEntity TwitterSubscriptions.LegacySubscriptionFeatureConfig  first-element-marker  -> TwitterSubscriptions.LegacySubscriptionFeatureConfigUpdateReason _$st updateObservable;
    nominal type descriptor for TFSObservable.ObservableInput TwitterSubscriptions.LegacySubscriptionFeatureConfig  first-element-marker  -> TwitterSubscriptions.LegacySubscriptionFeatureConfigUpdateReason _$st updateObservableInput;
}

@end

#endif /* _TtC20TwitterSubscriptions31LegacySubscriptionFeatureConfig_h */
