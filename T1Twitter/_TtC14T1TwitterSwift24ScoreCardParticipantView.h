//
#ifndef _TtC14T1TwitterSwift24ScoreCardParticipantView_h
#define _TtC14T1TwitterSwift24ScoreCardParticipantView_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class T1TwitterSwift.ScoreCardParticipantViewModel, UIView, _$s10Foundation3URLVMn ?, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo18NSLayoutConstraintC, _$sSo22TIPImageFetchOperationCSg, _$sSo6UIViewC, _$sSo7UIColorC, _$sSo7UIColorCSg, _$sSo7UILabelC;

@interface T1TwitterSwift.ScoreCardParticipantView : UIView <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    __C.UIColor? fallbackBackgroundColor;
    __C.UIColor rowBackgroundColor;
    __C.UIColor loserParticipantScoreTextColor;
    __C.UIView colorStripView;
    __C.UIColor defaultTextColor;
    __C.UIImageView logoImageView;
    __C.UILabel nameLabel;
    __C.UILabel scoreLabel;
    __C.UIStackView scoreStackView;
    __C.UILabel secondaryScoreLabel;
    __C.NSLayoutConstraint imageWidthConstraint;
    T1TwitterSwift.ScoreCardParticipantViewModel viewModel;
    __C.TIPImagePipeline? imagePipeline;
    __C.TIPImageFetchOperation? currentFetchOperation;
    nominal type descriptor for Foundation.URL ? currentlyLoadedImageURL;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;
- (void)tui_fetchHelper:(id)helper didFailToLoadImageWithError:(id)error;
- (void)tui_fetchHelper:(id)helper didLoadInitialImageFromSource:(long long)source;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift24ScoreCardParticipantView_h */
