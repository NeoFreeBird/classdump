//
#ifndef _TtC14T1TwitterSwift31ProfileLinkModuleViewController_h
#define _TtC14T1TwitterSwift31ProfileLinkModuleViewController_h
@import Foundation;

@class _$s21TwitterProfileModules0bC7ContextMp, _$s23TwitterProfileModulesUI04LinkB20ModuleViewControllerCN, _$sSo17TFNTwitterAccountC, _$sSo18T1ProfileViewModel_p;

@interface T1TwitterSwift.ProfileLinkModuleViewController : type metadata for TwitterProfileModulesUI.LinkProfileModuleViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.T1ProfileViewModel profileViewModel;
    protocol descriptor for TwitterProfileModules.ProfileModulesContext context;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)scribeViewImpressionWithParameters:(id)parameters;
- (void)didTapLinkModuleViewWithSender:(id)sender;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift31ProfileLinkModuleViewController_h */
