//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation25HomeFiltersSheetPresenter_h
#define _TtC32TwitterHomeFeatureImplementation25HomeFiltersSheetPresenter_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterHomeFeatureImplementation.HomeFiltersSheetFilterType ?, TwitterHomeFeatureImplementation.HomeFiltersSheetPresentationMode, TwitterHomeFeatureImplementation.HomeFiltersTrayContentViewController ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSDySSSbG, _$sShySSG, _$sSi, _$sSo16TFNScribeContext_p, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg, _$syycSg;

@interface TwitterHomeFeatureImplementation.HomeFiltersSheetPresenter : NSObject { // (Swift)
    /* instance variables */
    TwitterHomeFeatureImplementation.HomeFiltersSheetPresentationMode mode;
    Swift.Bool isSnoozeMode;
    Swift.Int resetPeriodMinutes;
    Swift.Bool showAutoResetText;
    __C.TFSTwitterLegacyScribeLogMethods? scribe;
    __C.TFNScribeContext scribeContext;
    TwitterHomeFeatureImplementation.HomeFiltersSheetResult function type (escaping) onResult;
    (() -> ())? onDismiss;
    [Swift.String : Swift.Bool] multiSelectState;
    Swift.Set<Swift.String> initialSelectedSet;
    Swift.Bool enteredWithActiveFilter;
    TwitterHomeFeatureImplementation.HomeFiltersSheetFilterType ? currentOptionsFilterType;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? trayManager;
    TwitterHomeFeatureImplementation.HomeFiltersTrayContentViewController ? trayCategoryContent;
    TwitterHomeFeatureImplementation.HomeFiltersTrayContentViewController ? trayOptionsContent;
    Swift.Bool didDeliverTrayResult;
}

/* class methods */
+ (id)effectiveMultiSelectSetWithSelectedIdentifiers:(id)identifiers allOptionIdentifiers:(id)identifiers;

/* instance methods */
- (void)presentFrom:(id)from;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation25HomeFiltersSheetPresenter_h */
