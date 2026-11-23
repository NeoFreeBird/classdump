//
#ifndef _TtC14T1TwitterSwift31ProfileJobsModuleViewController_h
#define _TtC14T1TwitterSwift31ProfileJobsModuleViewController_h
@import Foundation;

@class TFNViewController, _$s21TwitterProfileModules04JobsB6ModuleVMn, _$s21TwitterProfileModules0bC7ContextMp, _$s23TwitterProfileModulesUI25JobCarouselViewControllerCMn ?, _$sSo11UIStackViewCSg, _$sSo17TFNTwitterAccountC, _$sSo18T1ProfileViewModel_p, _$sSo7UILabelCSg, _$sSo8UIButtonCSg;

@interface T1TwitterSwift.ProfileJobsModuleViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.T1ProfileViewModel profileViewModel;
    protocol descriptor for TwitterProfileModules.ProfileModulesContext profileModulesContext;
    nominal type descriptor for TwitterProfileModules.JobsProfileModule viewModel;
    nominal type descriptor for TwitterProfileModulesUI.JobCarouselViewController ? $__lazy_storage_$_carouselViewController;
    __C.UIStackView? $__lazy_storage_$_headerStackView;
    __C.UILabel? $__lazy_storage_$_featuredJobsLabel;
    __C.UIButton? $__lazy_storage_$_viewAllJobs;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)handleViewJobsTap:(id)tap;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeParameters;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift31ProfileJobsModuleViewController_h */
