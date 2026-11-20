//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
