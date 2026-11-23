//
#ifndef _TtC14T1TwitterSwift17ScoreCardItemView_h
#define _TtC14T1TwitterSwift17ScoreCardItemView_h
@import Foundation;

@class T1TwitterSwift.CaretWrapperView, T1TwitterSwift.ScoreCardItemViewModel ?, T1TwitterSwift.ScoreCardParticipantView, UIView, _$sSo11UIStackViewC, _$sSo16TFNDismissButtonC, _$sSo16TIPImagePipelineCSg, _$sSo18NSLayoutConstraintC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface T1TwitterSwift.ScoreCardItemView : UIView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.TFNDismissButton caret;
    T1TwitterSwift.ScoreCardParticipantView topParticipantView;
    __C.UIView participantSeparator;
    T1TwitterSwift.ScoreCardParticipantView bottomParticipantView;
    __C.UIView participantsContainerView;
    __C.UIView participantsContainerShadowView;
    __C.UIStackView participantsStackView;
    __C.UIStackView gameSummaryStackView;
    __C.UILabel gameStateLabel;
    __C.UILabel middleDotLabel;
    __C.UILabel gameClockLabel;
    __C.UILabel categoryLabel;
    __C.NSLayoutConstraint caretWidthConstraint;
    __C.UIStackView caretStackView;
    T1TwitterSwift.CaretWrapperView caretView;
    T1TwitterSwift.ScoreCardItemViewModel ? viewModel;
}

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift17ScoreCardItemView_h */
