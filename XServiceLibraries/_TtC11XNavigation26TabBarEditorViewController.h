//
#ifndef _TtC11XNavigation26TabBarEditorViewController_h
#define _TtC11XNavigation26TabBarEditorViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XDesignSystem.Button ?, XNavigation.TabBarEditor.Limits, XNavigation.TabBarEditorBarView, XNavigation.TabBarEditorBarView ?, XNavigation.TabBarEditorPickerView ?, XNavigation.TabBarEditorViewController.PickerTarget ?, _$sSD -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarEditor.Option, _$sSSSg, _$sSa -> XNavigation.TabBarController.TabIdentifier, _$sSa -> XNavigation.TabBarEditor.Option, _$sSi, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIActionCSg, _$sySa -> XNavigation.TabBarController.TabIdentifier _$sGcSg, _$sySbcSg;

@interface XNavigation.TabBarEditorViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Array -> XNavigation.TabBarController.TabIdentifier selection;
     empty-list Swift.Array -> XNavigation.TabBarController.TabIdentifier _$sGcSg onSelectionChange;
    ((Swift.Bool) -> ())? onArrangingChange;
    Swift.Array -> XNavigation.TabBarEditor.Option options;
    Swift.Dictionary -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarEditor.Option optionsByIdentifier;
    XNavigation.TabBarEditor.Limits limits;
    Swift.String? message;
    __C.UIAction? resetAction;
    Swift.Int selectedIndex;
    XNavigation.TabBarEditorBarView barView;
    __C.UIView dismissCatcher;
    __C.UILabel messageLabel;
    __C.UILabel hintLabel;
    XDesignSystem.Button ? resetButton;
    XNavigation.TabBarEditorPickerView ? picker;
    XNavigation.TabBarEditorViewController.PickerTarget ? pickerTarget;
    Swift.Bool hasAdoptedTabBarSelection;
    XNavigation.TabBarEditorBarView ? tabBarFlight;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)handleCatcherTap;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11XNavigation26TabBarEditorViewController_h */
