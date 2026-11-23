//
#ifndef _TtC23TwitterProfileModulesUI31LinkProfileModuleViewController_h
#define _TtC23TwitterProfileModulesUI31LinkProfileModuleViewController_h
@import Foundation;

@class TFNViewController, TwitterProfileModules.LinkProfileModule ?, TwitterProfileModulesUI.LinkProfileModuleView ?;

@interface TwitterProfileModulesUI.LinkProfileModuleViewController : TFNViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.LinkProfileModule ? viewModel;
    TwitterProfileModulesUI.LinkProfileModuleView ? $__lazy_storage_$_linkProfileModuleView;
}

/* instance methods */
- (void)loadView;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC23TwitterProfileModulesUI31LinkProfileModuleViewController_h */
