//
#ifndef _TtCCO16TwitterAdFormats19BrandedLikePreviews18LandingItemAdapter11LandingCell_h
#define _TtCCO16TwitterAdFormats19BrandedLikePreviews18LandingItemAdapter11LandingCell_h
@import Foundation;

@class TFNTableViewCell, TwitterAdFormats.BrandedLikePreviews.LandingItem ?, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface TwitterAdFormats.BrandedLikePreviews.LandingItemAdapter.LandingCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    TwitterAdFormats.BrandedLikePreviews.LandingItem ? item;
    __C.UILabel? $__lazy_storage_$_headerLabel;
    __C.UILabel? $__lazy_storage_$_instructionsLabel;
    __C.TFNButton? $__lazy_storage_$_openButton;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)didPressOpen;

@end

#endif /* _TtCCO16TwitterAdFormats19BrandedLikePreviews18LandingItemAdapter11LandingCell_h */
