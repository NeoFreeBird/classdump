//
#ifndef _TtC14T1TwitterSwift22GuideLiveEventCardView_h
#define _TtC14T1TwitterSwift22GuideLiveEventCardView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TUICardViewAccessible-Protocol.h"

@class T1TwitterSwift.GuideCellHeaderView, T1TwitterSwift.GuideLiveEventCardViewModel ?, TIPImagePipeline, TUICardView, _$sSo11UIImageViewCSg, _$sSo11UIStackViewC, _$sSo24TFNTappableHighlightViewCSg, _$sSo7UILabelC, __C.CGSize;

@interface T1TwitterSwift.GuideLiveEventCardView : TUICardView <TUICardViewAccessible, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    T1TwitterSwift.GuideLiveEventCardViewModel ? viewModel;
    __C.UIStackView bodyStackView;
    __C.UIStackView textVerticalStackView;
    T1TwitterSwift.GuideCellHeaderView headerView;
    __C.UILabel titleLabel;
    __C.UIImageView? $__lazy_storage_$_thumbnailImageView;
    __C.TFNTappableHighlightView? $__lazy_storage_$_highlightView;
    __C.CGSize thumbnailSize;
}

@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (id)accessibilityStringForStatusText:(id)text;
- (id)imageFetchingViews;
- (void)fetchImages;
- (void)didTapHighlightViewWithSender:(id)sender;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* _TtC14T1TwitterSwift22GuideLiveEventCardView_h */
