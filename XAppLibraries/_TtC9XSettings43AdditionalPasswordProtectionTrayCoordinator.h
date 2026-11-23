//
#ifndef _TtC9XSettings43AdditionalPasswordProtectionTrayCoordinator_h
#define _TtC9XSettings43AdditionalPasswordProtectionTrayCoordinator_h
@import Foundation;

@class XSettings.SettingsContext, XSettings.SettingsTrayListContentViewController ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSbSg, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface XSettings.AdditionalPasswordProtectionTrayCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSettings.SettingsContext context;
    weak __C.UIViewController? host;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? tray;
    XSettings.SettingsTrayListContentViewController ? content;
    Swift.Bool? passkeyEnabled;
    Swift.Bool? pendingResetProtect;
}

@end

#endif /* _TtC9XSettings43AdditionalPasswordProtectionTrayCoordinator_h */
