//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XSettings35IdentityVerificationTrayCoordinator_h
#define _TtC9XSettings35IdentityVerificationTrayCoordinator_h
@import Foundation;

@class Swift.Bool, XSettings.SettingsContext, XSettings.SettingsTrayListContentViewController ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSbSg, _$sSo16UIViewControllerCSgXw, _$sySbcSg, _TtCs12_SwiftObject;

@interface XSettings.IdentityVerificationTrayCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onLoadingChanged;
    XSettings.SettingsContext context;
    weak __C.UIViewController? host;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? tray;
    XSettings.SettingsTrayListContentViewController ? statusContent;
    Swift.Bool labelHidden;
    Swift.Bool? pendingLabelHidden;
}

@end

#endif /* _TtC9XSettings35IdentityVerificationTrayCoordinator_h */
