//
#ifndef T1ConnectSegmentedViewController_h
#define T1ConnectSegmentedViewController_h
@import Foundation;

#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class TFNViewController;

@interface T1ConnectSegmentedViewController : TFNViewController <TFNUISwift.LegacySegmentedViewControllerDataSource> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *tabs;
    NSNumber"16@0:8 *$__lazy_storage_$_segmentedController;
}

/* instance methods */
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)initWithAccount:(id)account;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ConnectSegmentedViewController_h */
