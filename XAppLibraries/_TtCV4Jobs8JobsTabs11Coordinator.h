//
#ifndef _TtCV4Jobs8JobsTabs11Coordinator_h
#define _TtCV4Jobs8JobsTabs11Coordinator_h
@import Foundation;

#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class NSObject, _$sSa -> _$s7SwiftUI7AnyViewVMn, _$sSaySSG, _$sSayyycSgG;

@interface Jobs.JobsTabs.Coordinator : NSObject <TFNUISwift.LegacySegmentedViewControllerDataSource, TFNUISwift.LegacySegmentedViewControllerDelegate> { // (Swift)
    /* instance variables */
    [Swift.String] labels;
    [Swift.String] icons;
    Swift.Array -> nominal type descriptor for SwiftUI.AnyView views;
    [(() -> ())?] didSelectCallbacks;
}

/* instance methods */
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (id)init;

@end

#endif /* _TtCV4Jobs8JobsTabs11Coordinator_h */
