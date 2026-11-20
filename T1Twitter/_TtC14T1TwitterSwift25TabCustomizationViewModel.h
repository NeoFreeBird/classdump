//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift25TabCustomizationViewModel_h
#define _TtC14T1TwitterSwift25TabCustomizationViewModel_h
@import Foundation;

@class T1TwitterSwift.MainAppNavigationSettings, _$s13TFSObservable15ObservableInputVMn _$sySa -> T1TwitterSwift.TabCustomizationItem, _$s13TFSObservable16ObservableEntityCMn _$sySa -> T1TwitterSwift.TabCustomizationItem, _$sSS, _$sSSSg, _$sSa -> T1TwitterSwift.TabCustomizationItem, _$sSo23TFSTwitterScribeContextC, _$sSo32TFSTwitterLegacyScribeLogMethods_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.TabCustomizationViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    __C.TFSTwitterScribeContext scribeContext;
    Swift.String scribeComponent;
    T1TwitterSwift.MainAppNavigationSettings navigationSettings;
    nominal type descriptor for TFSObservable.ObservableEntity  empty-list Swift.Array -> T1TwitterSwift.TabCustomizationItem didUpdateTabBarItems;
    nominal type descriptor for TFSObservable.ObservableInput  empty-list Swift.Array -> T1TwitterSwift.TabCustomizationItem didUpdateTabBarInput;
    Swift.String navigationTitle;
    Swift.String? navigationSubtitle;
    Swift.Array -> T1TwitterSwift.TabCustomizationItem tabBarItems;
}

@end

#endif /* _TtC14T1TwitterSwift25TabCustomizationViewModel_h */
