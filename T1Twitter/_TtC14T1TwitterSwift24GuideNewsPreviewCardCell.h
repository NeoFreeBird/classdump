//
#ifndef _TtC14T1TwitterSwift24GuideNewsPreviewCardCell_h
#define _TtC14T1TwitterSwift24GuideNewsPreviewCardCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNTableViewCell, _$s10TwitterURT28URTTimelineNewsItemViewModelCMn ?, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo18NSLayoutConstraintCSg, _$sSo7UILabelC;

@interface T1TwitterSwift.GuideNewsPreviewCardCell : TFNTableViewCell <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    __C.UIStackView contentStackView;
    __C.UILabel authorLabel;
    __C.UILabel titleLabel;
    __C.UILabel descriptionLabel;
    __C.UILabel pivotLabel;
    __C.UIImageView newsImageView;
    __C.NSLayoutConstraint? imageViewLeadingConstraint;
    __C.NSLayoutConstraint? imageViewTrailingConstraint;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for TwitterURT.URTTimelineNewsItemViewModel ? viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* _TtC14T1TwitterSwift24GuideNewsPreviewCardCell_h */
