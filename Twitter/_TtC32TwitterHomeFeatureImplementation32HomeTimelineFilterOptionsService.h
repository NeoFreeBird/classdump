//
#ifndef _TtC32TwitterHomeFeatureImplementation32HomeTimelineFilterOptionsService_h
#define _TtC32TwitterHomeFeatureImplementation32HomeTimelineFilterOptionsService_h
@import Foundation;

@class Swift.Bool, _$s20TwitterActionService0bC0CMn ?, _$sSS, _$sSSSg, _$sSa -> _$s11TwitterHome0B12FilterOptionCMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.HomeTimelineFilterOptionsService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    nominal type descriptor for TwitterActionService.ActionService ? $__lazy_storage_$_actionService;
    Swift.Bool hasFetchedFilterOptions;
    Swift.Array -> nominal type descriptor for TwitterHome.HomeFilterOption ? fetchedRegionFilterOptions;
    Swift.Array -> nominal type descriptor for TwitterHome.HomeFilterOption ? fetchedTopicFilterOptions;
    Swift.Bool fetchedRegionFilterIsMultiSelect;
    Swift.Bool fetchedTopicFilterIsMultiSelect;
    Swift.String? fetchedRegionFilterLabel;
    Swift.String? fetchedTopicFilterLabel;
    __C.NSObject? subscriptionObserver;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? fetchTask;
}

@end

#endif /* _TtC32TwitterHomeFeatureImplementation32HomeTimelineFilterOptionsService_h */
