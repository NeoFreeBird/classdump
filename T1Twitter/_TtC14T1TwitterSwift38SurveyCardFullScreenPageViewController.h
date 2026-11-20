//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift38SurveyCardFullScreenPageViewController_h
#define _TtC14T1TwitterSwift38SurveyCardFullScreenPageViewController_h
@import Foundation;

#include "TFNNavigationControllerTransitionProvider-Protocol.h"

@class T1TwitterSwift.SurveyCardFullScreenFlow, T1TwitterSwift.SurveyCardPage, T1TwitterSwift.SurveyCardPageLayoutableView ?, T1TwitterSwift.SurveyCardPageViewEventHandler ?, TFNViewController, _$sSo12UIScrollViewCSg;

@interface T1TwitterSwift.SurveyCardFullScreenPageViewController : TFNViewController <TFNNavigationControllerTransitionProvider> { // (Swift)
    /* instance variables */
    T1TwitterSwift.SurveyCardPage cardPage;
    T1TwitterSwift.SurveyCardFullScreenFlow flow;
    T1TwitterSwift.SurveyCardPageViewEventHandler ? $__lazy_storage_$_pageEventHandler;
    T1TwitterSwift.SurveyCardPageLayoutableView ? $__lazy_storage_$_pageView;
    __C.UIScrollView? $__lazy_storage_$_scrollView;
}

@property (nonatomic, readonly) _Bool tfn_logoTitleViewShown;

/* instance methods */
- (id)navigationControllerTransitionForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift38SurveyCardFullScreenPageViewController_h */
