//
#ifndef TFNAttributedTextView_OCFUI_h
#define TFNAttributedTextView_OCFUI_h
@import Foundation;

@interface TFNAttributedTextView (OCFUI)

/* instance methods */
- (id)ocf_onboardingTapTranslator;
- (void)setOcf_onboardingTapTranslator:(id)translator;
- (void)setOcf_navigationLinkHandler:(id)handler;
- (id)ocf_navigationLinkHandler;
- (void)ocf_updateForExpandedRichText:(id)text font:(id)font color:(id)color activeRangesFont:(id)font textAlignment:(long long)alignment lineBreakMode:(long long)mode;
- (void)ocf_updateForText:(id)text activeRanges:(id)ranges font:(id)font color:(id)color activeRangesFont:(id)font textAlignment:(long long)alignment lineBreakMode:(long long)mode;
- (void)_ocf_updateForText:(id)text activeRanges:(id)ranges attributedStringFactory:(id /* block */)factory;

@end

#endif /* TFNAttributedTextView_OCFUI_h */
