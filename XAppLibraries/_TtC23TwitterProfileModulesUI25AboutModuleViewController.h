//
#ifndef _TtC23TwitterProfileModulesUI25AboutModuleViewController_h
#define _TtC23TwitterProfileModulesUI25AboutModuleViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, TwitterProfileModules.AboutProfileModule, TwitterProfileModules.ProfileModulesContext, TwitterProfileModulesUI.AboutModuleView ?;

@interface TwitterProfileModulesUI.AboutModuleViewController : TFNViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.AboutProfileModule viewModel;
    TwitterProfileModules.ProfileModulesContext context;
    Swift.Bool isSharingEnabled;
    TwitterProfileModulesUI.AboutModuleView ? $__lazy_storage_$_moduleView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC23TwitterProfileModulesUI25AboutModuleViewController_h */
