//
#ifndef _TtC7XSports29SportsStandingsViewController_h
#define _TtC7XSports29SportsStandingsViewController_h
@import Foundation;

@class UIViewController, XDiffableCollection.DiffableView, XSports.SegmentedControlView, XSports.SportsChipCarouselView XSports.SportsStandingsFilterChipView, XSports.SportsStandingsRouting, XSports.SportsStandingsStoreType, _$s12CoreGraphics7CGFloatVMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sShySSG, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC;

@interface XSports.SportsStandingsViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsStandingsStoreType store;
    XSports.SportsStandingsRouting router;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SegmentedControlView filterControl;
    XSports.SportsChipCarouselView XSports.SportsStandingsFilterChipView filterCarousel;
    XDiffableCollection.DiffableView diffableView;
    __C.UILabel errorLabel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    nominal type descriptor for CoreGraphics.CGFloat renderedWidth;
    Swift.Set<Swift.String> expandedChartIDs;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handleRefresh;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports29SportsStandingsViewController_h */
