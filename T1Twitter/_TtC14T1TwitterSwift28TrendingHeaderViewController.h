//
#ifndef _TtC14T1TwitterSwift28TrendingHeaderViewController_h
#define _TtC14T1TwitterSwift28TrendingHeaderViewController_h
@import Foundation;

#include "T1ResizableHeaderViewController.h"

@class Swift.Bool, T1TwitterSwift.TrendingHeaderViewController.ViewModel ?, _$s20TwitterActionService0bC0CMn ?, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextCSg;

@interface T1TwitterSwift.TrendingHeaderViewController : T1ResizableHeaderViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext? scribeContext;
    Swift.Bool hasLoggedBannerImpression;
    T1TwitterSwift.TrendingHeaderViewController.ViewModel ? viewModel;
    nominal type descriptor for TwitterActionService.ActionService ? $__lazy_storage_$_actionService;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)resizableHeaderViewDidTapBackButton:(id)button;
- (void)resizableHeaderView:(id)view didTapShareHeaderButton:(id)button;
- (void)resizableHeaderView:(id)view didTapReportNavigationButton:(id)button;
- (id)makeNavigationBarButtonItemForBarButtonOption:(long long)option;
- (void)didTapNavigationBarReport;
- (id)initWithHeaderViewClass:(Class)_class scribe:(id)scribe;
- (id)initWithHeaderViewConstructor:(id /* block */)constructor scribe:(id)scribe;

@end

#endif /* _TtC14T1TwitterSwift28TrendingHeaderViewController_h */
