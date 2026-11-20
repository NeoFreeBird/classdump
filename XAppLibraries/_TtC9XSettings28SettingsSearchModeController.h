//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XSettings28SettingsSearchModeController_h
#define _TtC9XSettings28SettingsSearchModeController_h
@import Foundation;

@class Swift.Bool, XSettings.SettingsContext, XSettings.SettingsSearchEntry _$scSg ->, XSettings.SettingsSearchIndex ?, XSettings.SettingsSearchTitleView, _$s13XDesignSystem9ListItemsCMn, _$sSo7UILabelC, _$sySbcSg, _TtCs12_SwiftObject;

@interface XSettings.SettingsSearchModeController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSettings.SettingsSearchTitleView titleView;
    nominal type descriptor for XDesignSystem.ListItems resultsList;
    __C.UILabel noResultsLabel;
    XSettings.SettingsSearchEntry _$scSg -> onOpenEntry;
    ((Swift.Bool) -> ())? onResultsVisibilityChanged;
    XSettings.SettingsContext context;
    XSettings.SettingsSearchIndex ? index;
    Swift.Bool hasActivatedSearch;
    Swift.Bool isShowingOverlay;
}

@end

#endif /* _TtC9XSettings28SettingsSearchModeController_h */
