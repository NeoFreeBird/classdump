//
#ifndef _TtC10XElections35ElectionsForecastTrayViewController_h
#define _TtC10XElections35ElectionsForecastTrayViewController_h
@import Foundation;

@class XElections.CenteredView ?, XElections.ElectionsDecisionDesk ?, XElections.ElectionsImageLoader ?, XElections.ElectionsRaceStanding, XElections.ElectionsRaceStandingView, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSa -> XElections.ElectionsRaceDetails.CompositionPart, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo7UIColorC, _$sSo7UIImageCSg, _$sSo7UILabelC;

@interface XElections.ElectionsForecastTrayViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    XElections.ElectionsRaceStanding standing;
    __C.UIColor accentColor;
    XElections.ElectionsDecisionDesk ? decisionDesk;
    __C.TIPImagePipeline? imagePipeline;
    XElections.ElectionsRaceStandingView ratingView;
    XElections.CenteredView ? $__lazy_storage_$_ratingRow;
    __C.UILabel probabilityLabel;
    __C.UIImageView logoView;
    XElections.ElectionsImageLoader ? $__lazy_storage_$_logoLoader;
    __C.UIImage? logo;
    Swift.Array -> XElections.ElectionsRaceDetails.CompositionPart composition;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewWillAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XElections35ElectionsForecastTrayViewController_h */
