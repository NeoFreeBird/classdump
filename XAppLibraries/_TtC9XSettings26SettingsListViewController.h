//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XSettings26SettingsListViewController_h
#define _TtC9XSettings26SettingsListViewController_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNViewController, XSettings.SettingsContext, XSettings.SettingsEntryPoint ?, XSettings.SettingsRowActivation ?, XSettings.SettingsScreenDefinition, XSettings.SettingsScreenPlaceholderView ?, XSettings.SettingsSearchModeController ?, _$s13XDesignSystem10LinkedTextCMn ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$s13XDesignSystem9ListItemsCMn, _$sSDySS XSettings.SettingsAvatarView, _$sSSSg, _$sSaySo18NSLayoutConstraintCG, _$sSaySo8NSObject_pG, _$sSbSg, _$sSo6UIViewCSg, _$syXlSg;

@interface XSettings.SettingsListViewController : TFNViewController <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    XSettings.SettingsContext context;
    XSettings.SettingsScreenDefinition screen;
    XSettings.SettingsRowActivation ? activation;
    XSettings.SettingsEntryPoint ? entryPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    __C.UIView? headerView;
    [__C.NSLayoutConstraint] leadingInsetConstraints;
    [__C.NSLayoutConstraint] trailingInsetConstraints;
    XSettings.SettingsScreenPlaceholderView ? placeholderView;
    nominal type descriptor for XDesignSystem.LinkedText ? bottomNoteText;
    [__C.NSObject] changeObservers;
    Swift.Bool? scheduledRefreshIsAnimated;
    XSettings.SettingsSearchModeController ? searchMode;
    Swift.AnyObject? trayCoordinator;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? presentedTray;
    Swift.String? presentedTrayRowID;
    Swift.String? loadingRowID;
    Swift.Dictionary empty-list Swift.String XSettings.SettingsAvatarView avatarViews;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeImpressionParameters;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC9XSettings26SettingsListViewController_h */
