//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC22SuperAwesomeVideoCache31SAVCacheContainerViewController_h
#define _TtC22SuperAwesomeVideoCache31SAVCacheContainerViewController_h
@import Foundation;

@class SuperAwesomeVideoCache.SAVCacheItemsViewController, SuperAwesomeVideoCache.SAVCacheViewModel, UIViewController;

@interface SuperAwesomeVideoCache.SAVCacheContainerViewController : UIViewController { // (Swift)
    /* instance variables */
    SuperAwesomeVideoCache.SAVCacheItemsViewController itemsViewController;
    SuperAwesomeVideoCache.SAVCacheViewModel viewModel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)presentSettings;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC22SuperAwesomeVideoCache31SAVCacheContainerViewController_h */
