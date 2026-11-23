//
#ifndef _TtC18TwitterSearchSwift20TypeaheadCashtagCell_h
#define _TtC18TwitterSearchSwift20TypeaheadCashtagCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TIPImageViewFetchHelperDataSource-Protocol.h"
#include "TIPImageViewFetchHelperDelegate-Protocol.h"

@class TFNTableViewCell, _$s10Foundation3URLVMn ?, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo18NSLayoutConstraintCSg, _$sSo7UILabelC;

@interface TwitterSearchSwift.TypeaheadCashtagCell : TFNTableViewCell <TFNLayoutMetricsEnvironment, TIPImageViewFetchHelperDelegate, TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL ? logoURL;
    nominal type descriptor for Foundation.URL ? chainLogoURL;
    __C.NSLayoutConstraint? rightStackTrailingConstraint;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIImageView iconImageView;
    __C.UIImageView chainLogoImageView;
    __C.UILabel iconFallbackLabel;
    __C.UILabel nameLabel;
    __C.UILabel tickerLabel;
    __C.UILabel exchangeOrCryptoSeparatorLabel;
    __C.UILabel exchangeOrCryptoLabel;
    __C.UILabel separatorLabel;
    __C.UILabel marketCapLabel;
    __C.UILabel contractAddressSeparatorLabel;
    __C.UILabel contractAddressLabel;
    __C.UILabel currencyCodeSeparatorLabel;
    __C.UILabel currencyCodeLabel;
    __C.UILabel priceLabel;
    __C.UILabel changeLabel;
    __C.UIStackView tickerAndMarketCapStack;
    __C.UIStackView leftStack;
    __C.UIStackView rightStack;
}

/* instance methods */
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)traitCollectionDidChange:(id)change;
- (void)tip_fetchHelper:(id)helper didUpdateDisplayedImageContainer:(id)container fromSourceDimensions:(struct CGSize { double x0; double x1; })dimensions isFinal:(_Bool)final;
- (void)tip_fetchHelper:(id)helper didLoadFinalImageFromSource:(long long)source;
- (void)tip_fetchHelper:(id)helper didFailToLoadFinalImage:(id)image;
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC18TwitterSearchSwift20TypeaheadCashtagCell_h */
