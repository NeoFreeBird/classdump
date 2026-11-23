//
#ifndef _TtC14T1TwitterSwift32ProfileAboutModuleViewController_h
#define _TtC14T1TwitterSwift32ProfileAboutModuleViewController_h
@import Foundation;

@class TFNViewController, _$s21TwitterProfileModules05AboutB6ModuleVMn, _$s21TwitterProfileModules0bC7ContextMp, _$s23TwitterProfileModulesUI25AboutModuleViewControllerCMn ?, _$sSo17TFNTwitterAccountC, _$sSo18T1ProfileViewModel_p, _$sSo23TFSTwitterScribeContextCSg;

@interface T1TwitterSwift.ProfileAboutModuleViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.T1ProfileViewModel profileViewModel;
    protocol descriptor for TwitterProfileModules.ProfileModulesContext context;
    nominal type descriptor for TwitterProfileModules.AboutProfileModule viewModel;
    nominal type descriptor for TwitterProfileModulesUI.AboutModuleViewController ? $__lazy_storage_$_moduleViewController;
    __C.TFSTwitterScribeContext? $__lazy_storage_$_scribeContext;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (void)scribeViewImpressionWithParameters:(id)parameters;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift32ProfileAboutModuleViewController_h */
