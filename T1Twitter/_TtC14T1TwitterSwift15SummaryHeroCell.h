//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift15SummaryHeroCell_h
#define _TtC14T1TwitterSwift15SummaryHeroCell_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSString, T1TwitterSwift.SummaryContentView, T1TwitterSwift.SummaryMediaView, TFNTableViewCell, UIImage, UIView, _$s10TwitterURT34URTTimelineGenericSummaryViewModelCMn ?, _$sSo15TFNGradientViewCSg, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewCSg;

@interface T1TwitterSwift.SummaryHeroCell : TFNTableViewCell <TAVAutoplayViewContainer, T1AutoplayableContainer> { // (Swift)
    /* instance variables */
    __C.NSLayoutConstraint? heightConstraint;
    __C.UIView? $__lazy_storage_$_containerView;
    T1TwitterSwift.SummaryMediaView mediaView;
    T1TwitterSwift.SummaryContentView summaryContentView;
    nominal type descriptor for TwitterURT.URTTimelineGenericSummaryViewModel ? viewModel;
    __C.TFNGradientView? $__lazy_storage_$_gradientOverlayView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) UIImage *playerPreviewImage;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;

/* instance methods */
- (id)autoplayable;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* _TtC14T1TwitterSwift15SummaryHeroCell_h */
