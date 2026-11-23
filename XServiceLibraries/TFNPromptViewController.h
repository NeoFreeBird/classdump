//
#ifndef TFNPromptViewController_h
#define TFNPromptViewController_h
@import Foundation;

#include "TFNLayoutMetricsSizing-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TFNPromptView-Protocol.h"
#include "TFNViewController.h"

@class NSString, UIView;
@protocol TFNPromptDataSource;

@interface TFNPromptViewController : TFNViewController <TFNLayoutMetricsSizing, TFNModalSheetViewControllerLayoutDelegate> {
    /* instance variables */
    _Bool _didFireImpression;
}

@property (weak, nonatomic) id <TFNPromptDataSource> dataSource;
@property (readonly, nonatomic) UIView<TFNPromptView> *promptView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithHidesBackButton:(_Bool)button;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (_Bool)tfn_logoTitleViewShown;
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;
- (void)private_dismissAction:(id)action;
- (void)private_updatePromptView;
- (id)private_providePromptView;
- (void)private_configurePromptView:(id)view;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

@end

#endif /* TFNPromptViewController_h */
