//
#ifndef _TtC11LandingPage25LandingPageViewController_h
#define _TtC11LandingPage25LandingPageViewController_h
@import Foundation;

@class LandingPage.LandingPageViewModel, TFNItemsDataViewController, _$sSo11UIImageViewCSg;

@interface LandingPage.LandingPageViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    LandingPage.LandingPageViewModel viewModel;
    __C.UIImageView? $__lazy_storage_$_headerImageView;
}

@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeImpressionParameters;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)closeTapped;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC11LandingPage25LandingPageViewController_h */
