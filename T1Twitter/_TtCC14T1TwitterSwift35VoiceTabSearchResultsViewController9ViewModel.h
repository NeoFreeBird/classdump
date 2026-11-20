//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14T1TwitterSwift35VoiceTabSearchResultsViewController9ViewModel_h
#define _TtCC14T1TwitterSwift35VoiceTabSearchResultsViewController9ViewModel_h
@import Foundation;

#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class NSObject, T1TwitterSwift.VoiceTabSearchResultsViewController.ActionHandler, _$sSa -> T1TwitterSwift.VoiceTabSearchResultsViewController.ViewModel.PageEntry, _$sSo32TFSTwitterLegacyScribeLogMethods_p;

@interface T1TwitterSwift.VoiceTabSearchResultsViewController.ViewModel : NSObject <TFNUISwift.LegacySegmentedViewControllerDelegate, TFNUISwift.LegacySegmentedViewControllerDataSource> { // (Swift)
    /* instance variables */
    __C.TFSTwitterLegacyScribeLogMethods scribeLogMethods;
    T1TwitterSwift.VoiceTabSearchResultsViewController.ActionHandler actionHandler;
    Swift.Array -> T1TwitterSwift.VoiceTabSearchResultsViewController.ViewModel.PageEntry entries;
}

/* instance methods */
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)init;

@end

#endif /* _TtCC14T1TwitterSwift35VoiceTabSearchResultsViewController9ViewModel_h */
