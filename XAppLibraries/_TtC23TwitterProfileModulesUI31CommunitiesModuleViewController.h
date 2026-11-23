//
#ifndef _TtC23TwitterProfileModulesUI31CommunitiesModuleViewController_h
#define _TtC23TwitterProfileModulesUI31CommunitiesModuleViewController_h
@import Foundation;

@class TFNViewController, TwitterProfileModules.CommunitiesProfileModule, TwitterProfileModules.ProfileModulesContext, TwitterProfileModulesUI.CommunitiesModuleView ?;

@interface TwitterProfileModulesUI.CommunitiesModuleViewController : TFNViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.CommunitiesProfileModule viewModel;
    TwitterProfileModules.ProfileModulesContext context;
    TwitterProfileModulesUI.CommunitiesModuleView ? $__lazy_storage_$_moduleView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC23TwitterProfileModulesUI31CommunitiesModuleViewController_h */
