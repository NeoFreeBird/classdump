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
