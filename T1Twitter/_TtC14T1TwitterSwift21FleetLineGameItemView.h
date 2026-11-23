//
#ifndef _TtC14T1TwitterSwift21FleetLineGameItemView_h
#define _TtC14T1TwitterSwift21FleetLineGameItemView_h
@import Foundation;

@class T1TwitterSwift.FleetLineSportsGame ?, UIView, _$s13XDesignSystem4BlurCMn ?, _$s13XDesignSystem5GlassCMn ?, _$sSaySo22TIPImageFetchOperationCG, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo7UILabelC;

@interface T1TwitterSwift.FleetLineGameItemView : UIView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for XDesignSystem.Glass ? pillGlass;
    nominal type descriptor for XDesignSystem.Blur ? pillFrost;
    __C.UIView? backgroundPill;
    __C.UIView awayLogoView;
    __C.UIView homeLogoView;
    __C.UIImageView awayLogoImageView;
    __C.UIImageView homeLogoImageView;
    __C.UILabel infoLabel;
    __C.UIView liveDotView;
    __C.UILabel clockLabel;
    [__C.TIPImageFetchOperation] fetchOperations;
    T1TwitterSwift.FleetLineSportsGame ? renderedGame;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift21FleetLineGameItemView_h */
