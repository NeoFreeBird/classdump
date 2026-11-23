//
#ifndef _TtC9XSettings24MutedTermsViewController_h
#define _TtC9XSettings24MutedTermsViewController_h
@import Foundation;

@class TFNViewController, XSettings.MutedTermsTrayCoordinator ?, XSettings.SettingsContext, XSettings.SettingsEntryPoint ?, XSettings.SettingsMutedTermsStore, _$s13XDesignSystem10LinkedTextCMn ?, _$s13XDesignSystem9ListItemsCMn, _$sSaySo8NSObject_pG, _$sSo6UIViewC;

@interface XSettings.MutedTermsViewController : TFNViewController { // (Swift)
    /* instance variables */
    XSettings.SettingsContext context;
    XSettings.SettingsMutedTermsStore store;
    XSettings.SettingsEntryPoint ? entryPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    __C.UIView emptyStateView;
    __C.UIView addButtonBar;
    nominal type descriptor for XDesignSystem.LinkedText ? listFooterText;
    [__C.NSObject] changeObservers;
    XSettings.MutedTermsTrayCoordinator ? trayCoordinator;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeImpressionParameters;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC9XSettings24MutedTermsViewController_h */
