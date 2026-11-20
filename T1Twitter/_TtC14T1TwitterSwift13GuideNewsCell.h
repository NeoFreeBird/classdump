//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift13GuideNewsCell_h
#define _TtC14T1TwitterSwift13GuideNewsCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class T1TwitterSwift.GuideSocialProofView, TFNTableViewCell, _$s10TwitterURT28URTTimelineNewsItemViewModelCMn ?, _$sSo11UIImageViewCSg, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC, __C.CGSize;

@interface T1TwitterSwift.GuideNewsCell : TFNTableViewCell <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    __C.UIStackView bodyStackView;
    __C.UIStackView textVerticalStackView;
    T1TwitterSwift.GuideSocialProofView socialProofView;
    __C.UILabel authorLabel;
    __C.UILabel titleLabel;
    __C.UIImageView? $__lazy_storage_$_thumbnailImageView;
    __C.CGSize thumbnailSize;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for TwitterURT.URTTimelineNewsItemViewModel ? viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* _TtC14T1TwitterSwift13GuideNewsCell_h */
