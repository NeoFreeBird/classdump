//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CashTagInfoViewController_h
#define T1CashTagInfoViewController_h
@import Foundation;

#include "T1LegacyResizableHeaderContainerViewController.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class UIViewController;

@interface T1CashTagInfoViewController : T1LegacyResizableHeaderContainerViewController <TFNUISwift.LegacySegmentedViewControllerDataSource> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *smartTagData;
    NSNumber"16@0:8 *contentProvider;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) double headerTopOutset;

/* class methods */
+ (id)modalSheetViewControllerWithAccount:(id)account smartTagData:(id)data;

/* instance methods */
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)initWithAccount:(id)account smartTagData:(id)data;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)initWithHeaderViewController:(id)controller accountID:(id)id scribe:(id)scribe useAlternateBackgroundColor:(_Bool)color;

@end

#endif /* T1CashTagInfoViewController_h */
