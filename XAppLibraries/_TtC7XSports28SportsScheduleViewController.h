//
#ifndef _TtC7XSports28SportsScheduleViewController_h
#define _TtC7XSports28SportsScheduleViewController_h
@import Foundation;

@class UIViewController, XDiffableCollection.DiffableView, XSports.SportsChipCarouselView XSports.SportsScheduleWeekChipView, XSports.SportsHubAdBannerView, XSports.SportsScheduleRouting, XSports.SportsScheduleStoreType, XSports.SportsScheduleViewController.GamesFilter, _$s13XDesignSystem5InputCMn ?, _$s13XDesignSystem6ButtonCMn ?, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC;

@interface XSports.SportsScheduleViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsScheduleStoreType store;
    XSports.SportsScheduleRouting router;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for XDesignSystem.Input ? search;
    nominal type descriptor for XDesignSystem.Button ? conferenceButton;
    XSports.SportsScheduleViewController.GamesFilter filter;
    XSports.SportsChipCarouselView XSports.SportsScheduleWeekChipView weekCarouselView;
    XSports.SportsHubAdBannerView adBannerView;
    XDiffableCollection.DiffableView diffableView;
    __C.UILabel errorLabel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.String? displayedAdID;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)handleRefresh;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports28SportsScheduleViewController_h */
