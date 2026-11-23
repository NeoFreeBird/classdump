//
#ifndef _TtC4Grok19GrokBannerViewModel_h
#define _TtC4Grok19GrokBannerViewModel_h
@import Foundation;

@class Grok.GrokEventScriber, Grok.GrokFeatureAccess, Grok.GrokSettingsProvider, _$s7Combine19CurrentValueSubjectCMn _$s12CoreGraphics7CGFloatVMn _$ss5NeverOMn, _$s7Combine9PublishedVMn Grok.GrokAppBanner.Mode, _$s7Combine9PublishedVMn Swift.Bool, _$sSS, _$sSbyc, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface Grok.GrokBannerViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    Grok.GrokFeatureAccess featureAccess;
    Grok.GrokSettingsProvider settingsProvider;
    nominal type descriptor for Combine.Published Swift.Bool _isDownloadBannerDismissed;
    nominal type descriptor for Combine.Published Grok.GrokAppBanner.Mode _appBannerMode;
    nominal type descriptor for Combine.CurrentValueSubject nominal type descriptor for CoreGraphics.CGFloat nominal type descriptor for Swift.Never bannersHeight;
    Grok.GrokEventScriber grokScriber;
    () -> Swift.Bool isGrokAppInstalled;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC4Grok19GrokBannerViewModel_h */
