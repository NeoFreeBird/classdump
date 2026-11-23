//
#ifndef _TtC8Payments24OnboardingTermsViewModel_h
#define _TtC8Payments24OnboardingTermsViewModel_h
@import Foundation;

@class Payments.OnboardingVariant ?, _$s7Combine9PublishedVMn Payments.OnboardingCountry ?, _$s7Combine9PublishedVMn Payments.OnboardingTermsViewModel.BalancePreview ?, _$s7Combine9PublishedVMn Payments.OnboardingTermsViewModel.LoadingState, _$s7Combine9PublishedVMn _$sySa -> Payments.OnboardingCountry, _$sSDySSypGSg, _TtCs12_SwiftObject;

@interface Payments.OnboardingTermsViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Payments.OnboardingVariant ? variant;
    [Swift.String : Any]? urlParams;
    nominal type descriptor for Combine.Published Payments.OnboardingTermsViewModel.LoadingState _loadingState;
    nominal type descriptor for Combine.Published Payments.OnboardingTermsViewModel.BalancePreview ? _balancePreview;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Payments.OnboardingCountry _availableCountries;
    nominal type descriptor for Combine.Published Payments.OnboardingCountry ? _detectedCountry;
    nominal type descriptor for Combine.Published Payments.OnboardingCountry ? _selectedCountry;
}

@end

#endif /* _TtC8Payments24OnboardingTermsViewModel_h */
