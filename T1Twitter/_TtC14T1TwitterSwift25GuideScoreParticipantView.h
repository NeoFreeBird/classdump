//
#ifndef _TtC14T1TwitterSwift25GuideScoreParticipantView_h
#define _TtC14T1TwitterSwift25GuideScoreParticipantView_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class T1TwitterSwift.ScoreCardParticipantViewModel ?, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo17TFNSolidColorViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface T1TwitterSwift.GuideScoreParticipantView : UIView <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ScoreCardParticipantViewModel ? viewModel;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIView colorStripView;
    __C.TFNSolidColorView backgroundColorView;
    __C.UIImageView logoImageView;
    __C.UILabel scoreLabel;
    __C.UILabel secondaryScoreLabel;
    __C.UIStackView stackView;
}

/* instance methods */
- (void)tui_fetchHelper:(id)helper didLoadInitialImageFromSource:(long long)source;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift25GuideScoreParticipantView_h */
