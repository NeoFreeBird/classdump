//
#ifndef _TtC14T1TwitterSwift38ProfileAboutModuleViewControllerLegacy_h
#define _TtC14T1TwitterSwift38ProfileAboutModuleViewControllerLegacy_h
@import Foundation;

@class TFNViewController, _$s21TwitterProfileModules05AboutB6ModuleVMn ?, _$s21TwitterProfileModules0bC7ContextMp, _$sSo17TFNTwitterAccountC, _$sSo18T1ProfileViewModel_p;

@interface T1TwitterSwift.ProfileAboutModuleViewControllerLegacy : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.T1ProfileViewModel profileViewModel;
    protocol descriptor for TwitterProfileModules.ProfileModulesContext context;
    nominal type descriptor for TwitterProfileModules.AboutProfileModule ? viewModel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)scribeViewImpressionWithParameters:(id)parameters;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift38ProfileAboutModuleViewControllerLegacy_h */
