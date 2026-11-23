//
#ifndef GADOutOfContextNativeAdView_h
#define GADOutOfContextNativeAdView_h
@import Foundation;

#include "GADNativeAd.h"
#include "GADNativeAdView.h"

@class UIStackView;

@interface GADOutOfContextNativeAdView : GADNativeAdView {
    /* instance variables */
    GADNativeAd *_nativeAdProvider;
    UIStackView *_mainStackView;
}

/* instance methods */
- (id)initWithNativeAd:(id)ad;
- (void)setUp;
- (void)setUpMainStackView;
- (void)addHeadlineStackViewInStackView:(id)view;
- (void)addBodyStackViewInStackView:(id)view;
- (void)addMediaStackViewInStackView:(id)view;
- (id)generateLabelStackViewWithTitle:(id)title text:(id)text textNumberOfLines:(long long)lines textCompressionResistancePriority:(float)priority;
- (void)addTitleLabelInStackView:(id)view title:(id)title;
- (void)addTextLabelInStackView:(id)view text:(id)text numberOfLines:(long long)lines compressionResistancePriority:(float)priority;

@end

#endif /* GADOutOfContextNativeAdView_h */
