//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation28TabManagementSheetDataLoader_h
#define _TtC32TwitterHomeFeatureImplementation28TabManagementSheetDataLoader_h
@import Foundation;

@class Swift.Bool, _$s20TwitterActionService0bC0CMn, _$s7Combine9PublishedVMn TwitterHomeFeatureImplementation.TabManagementSheetDataLoader.LoadState, _$s7Combine9PublishedVMn _$sySa -> TwitterHomeFeatureImplementation.TabManagementItem, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.TabManagementSheetDataLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published TwitterHomeFeatureImplementation.TabManagementSheetDataLoader.LoadState _loadState;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterHomeFeatureImplementation.TabManagementItem _pinnedItems;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterHomeFeatureImplementation.TabManagementItem _topicOptions;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterHomeFeatureImplementation.TabManagementItem _subscriptionsOptions;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterHomeFeatureImplementation.TabManagementItem _communityOptions;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterHomeFeatureImplementation.TabManagementItem _listOptions;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    Swift.Bool isSubscriptionsSectionEnabled;
}

@end

#endif /* _TtC32TwitterHomeFeatureImplementation28TabManagementSheetDataLoader_h */
