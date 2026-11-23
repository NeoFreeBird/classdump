//
#ifndef _TtC7XSports49TeamNotificationSettingsTrayContentViewController_h
#define _TtC7XSports49TeamNotificationSettingsTrayContentViewController_h
@import Foundation;

@class Swift.Bool, XSports.SportsScribe, XSports.SportsTeamNotificationSettingsGridView, XSports.SportsTeamNotificationSettingsStore, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s7Combine14AnyCancellableCMn ?, _$sSa -> XSports.SportsFavoriteTeam, _$sSo16TIPImagePipelineCSg, _$sSo23UIActivityIndicatorViewC;

@interface XSports.TeamNotificationSettingsTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    XSports.SportsTeamNotificationSettingsStore store;
    Swift.Array -> XSports.SportsFavoriteTeam teams;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsScribe scribe;
    XSports.SportsTeamNotificationSettingsGridView grid;
    __C.UIActivityIndicatorView loadingIndicator;
    nominal type descriptor for Combine.AnyCancellable ? settingsCancellable;
    Swift.Bool hasRows;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports49TeamNotificationSettingsTrayContentViewController_h */
