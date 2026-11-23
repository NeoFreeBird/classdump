//
#ifndef _TtC9XSettings29ChangePasswordTrayCoordinator_h
#define _TtC9XSettings29ChangePasswordTrayCoordinator_h
@import Foundation;

@class XSettings.PasswordTrayStepViewController ?, XSettings.SettingsContext, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSS, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface XSettings.ChangePasswordTrayCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSettings.SettingsContext context;
    weak __C.UIViewController? host;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? tray;
    XSettings.PasswordTrayStepViewController ? currentPasswordStep;
    XSettings.PasswordTrayStepViewController ? newPasswordStep;
    Swift.String currentPassword;
    Swift.String newPassword;
}

@end

#endif /* _TtC9XSettings29ChangePasswordTrayCoordinator_h */
