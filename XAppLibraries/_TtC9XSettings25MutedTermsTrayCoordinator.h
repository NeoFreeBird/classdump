//
#ifndef _TtC9XSettings25MutedTermsTrayCoordinator_h
#define _TtC9XSettings25MutedTermsTrayCoordinator_h
@import Foundation;

@class XSettings.MutedTermsTrayStepViewController ?, XSettings.SettingsContext, XSettings.SettingsMutedTerm ?, XSettings.SettingsMutedTermDraft, XSettings.SettingsMutedTermsStore, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface XSettings.MutedTermsTrayCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSettings.SettingsContext context;
    XSettings.SettingsMutedTermsStore store;
    weak __C.UIViewController? host;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? tray;
    XSettings.MutedTermsTrayStepViewController ? muteFromStep;
    XSettings.MutedTermsTrayStepViewController ? durationStep;
    XSettings.MutedTermsTrayStepViewController ? editStep;
    XSettings.MutedTermsTrayStepViewController ? deleteConfirmStep;
    XSettings.SettingsMutedTermDraft draft;
    XSettings.SettingsMutedTerm ? editingTerm;
}

@end

#endif /* _TtC9XSettings25MutedTermsTrayCoordinator_h */
