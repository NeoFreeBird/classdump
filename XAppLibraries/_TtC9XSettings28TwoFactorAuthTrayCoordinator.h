//
#ifndef _TtC9XSettings28TwoFactorAuthTrayCoordinator_h
#define _TtC9XSettings28TwoFactorAuthTrayCoordinator_h
@import Foundation;

@class Swift.Bool, XSettings.SettingsContext, XSettings.SettingsTrayListContentViewController ?, XSettings.SettingsTwoFactorAuthState, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSh -> XSettings.SettingsTwoFactorMethod, _$sSo16UIViewControllerCSgXw, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface XSettings.TwoFactorAuthTrayCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSettings.SettingsContext context;
    weak __C.UIViewController? host;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? tray;
    XSettings.SettingsTrayListContentViewController ? rootContent;
    XSettings.SettingsTwoFactorAuthState state;
    Swift.Set -> XSettings.SettingsTwoFactorMethod loadingMethods;
    Swift.Bool isMasterToggleLoading;
    __C.NSObject? foregroundObserver;
}

@end

#endif /* _TtC9XSettings28TwoFactorAuthTrayCoordinator_h */
