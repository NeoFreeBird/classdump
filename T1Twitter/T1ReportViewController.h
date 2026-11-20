//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ReportViewController_h
#define T1ReportViewController_h
@import Foundation;

#include "T1BlockOrReportActionContext.h"
#include "T1WebViewController.h"

@class UIBarButtonItem;

@interface T1ReportViewController : T1WebViewController

@property (retain, nonatomic) UIBarButtonItem *backButton;
@property (retain, nonatomic) T1BlockOrReportActionContext *context;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (copy, nonatomic) id /* block */ onDismissBlock;

/* class methods */
+ (void)presentReportFromViewController:(id)controller account:(id)account context:(id)context requestDelegate:(id)delegate onDismissBlock:(id /* block */)block;
+ (id)titleForContextType:(unsigned long long)type;

/* instance methods */
- (id)initWithContext:(id)context account:(id)account;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (long long)_reportViewState;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)navigationMetadata;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeElement;
- (void)_cancelAction;
- (void)_doneAction;
- (void)_goBack:(id)back;
- (id)scribe;
- (id)scribeImpressionParameters;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (void)_presentNewWebViewWithURLString:(id)urlstring;
- (void)didFinishLoadingWithError:(id)error;
- (void)_cleanUpTimelineIfNeeded;
- (void)_performNativeActionForURL:(id)url;
- (void)_performFinalAction:(id /* block */)action;
- (_Bool)_requestRepresentsEndOfZazuFlow:(id)flow;
- (void)_completeZazuReportFlowWithRequest:(id)request;
- (_Bool)shouldHideNavigationIcons;
- (_Bool)shouldHideSecuredIcon;
- (_Bool)hasCustomNavigationBar;

@end

#endif /* T1ReportViewController_h */
