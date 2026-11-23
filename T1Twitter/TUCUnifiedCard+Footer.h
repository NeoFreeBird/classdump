//
#ifndef TUCUnifiedCard_Footer_h
#define TUCUnifiedCard_Footer_h
@import Foundation;

@interface TUCUnifiedCard (Footer)

/* instance methods */
- (_Bool)containsVideo;
- (id)videoSourceComponent;
- (_Bool)tuc_hadGrokDeeplinkButton;
- (void)setTuc_hadGrokDeeplinkButton:(_Bool)button;
- (_Bool)shouldHideFooterViewForUserIdentityType:(long long)type features:(id)features;
- (unsigned long long)footerTypeWithWebCardRedesignVariant:(unsigned long long)variant shouldHideFooter:(_Bool)footer forceShowCTABarCardTypes:(id)types isAppStoreDownloadBarEnabled:(_Bool)enabled;
- (unsigned long long)footerTypeWithFeatures:(id)features shouldHideFooter:(_Bool)footer;
- (_Bool)canShowAdDisclosureInFooterType:(unsigned long long)type;

@end

#endif /* TUCUnifiedCard_Footer_h */
