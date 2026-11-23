//
#ifndef _TtC7XSports28SportsSettingsViewController_h
#define _TtC7XSports28SportsSettingsViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, XSports.SportsSettingsStore, XSports.SportsTeamNotificationSettingsGridView, _$s13XDesignSystem9ListItemsCMn, _$s7Combine14AnyCancellableCMn ?, _$sSDySSSo6UIViewCG, _$sSo16TIPImagePipelineCSg, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewC;

@interface XSports.SportsSettingsViewController : TFNViewController { // (Swift)
    /* instance variables */
    XSports.SportsSettingsStore store;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for XDesignSystem.ListItems list;
    __C.UIActivityIndicatorView loadingIndicator;
    XSports.SportsTeamNotificationSettingsGridView teamsGrid;
    __C.UIView teamsFooter;
    [Swift.String : __C.UIView] childIndents;
    nominal type descriptor for Combine.AnyCancellable ? stateCancellable;
    Swift.Bool hasAppliedScrollEdgeTreatment;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports28SportsSettingsViewController_h */
