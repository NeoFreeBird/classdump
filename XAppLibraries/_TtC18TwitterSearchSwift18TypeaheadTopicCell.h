//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterSearchSwift18TypeaheadTopicCell_h
#define _TtC18TwitterSearchSwift18TypeaheadTopicCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TIPImageViewFetchHelperDataSource-Protocol.h"

@class Swift.Bool, TFNTableViewCell, TwitterSearchSwift.TypeaheadTopicCell.Accessory ?, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo18NSAttributedStringCSg, _$sSo18NSLayoutConstraintCSg, _$sSo7UIImageCSg, _$sSo7UILabelC, _$sSo8UIButtonC, _$syXlSg;

@interface TwitterSearchSwift.TypeaheadTopicCell : TFNTableViewCell <TFNLayoutMetricsEnvironment, TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    Swift.AnyObject? context;
    __C.UIImage? leadingIcon;
    __C.NSAttributedString? queryString;
    __C.NSAttributedString? contextString;
    __C.UIImage? contextImage;
    __C.TIPImagePipeline? imagePipeline;
    TwitterSearchSwift.TypeaheadTopicCell.Accessory ? accessory;
    Swift.Bool contextOnTop;
    __C.UIImageView leadingIconImageView;
    __C.UILabel queryLabel;
    __C.UIImageView contextImageView;
    __C.UILabel contextLabel;
    __C.UIButton accessoryButton;
    __C.UIImageView accessoryImageView;
    __C.NSLayoutConstraint? $__lazy_storage_$_accessoryImageViewTopAndBottomSpacing;
    __C.UIStackView textStack;
    __C.UIStackView contextStack;
    __C.UIStackView contentStack;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)accessoryButtonTapped;
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;

@end

#endif /* _TtC18TwitterSearchSwift18TypeaheadTopicCell_h */
