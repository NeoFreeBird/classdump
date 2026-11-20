//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADBrowserViewController_h
#define GADBrowserViewController_h
@import Foundation;

#include "GADActionURLHandler.h"
#include "GADAdContent.h"
#include "GADBrowserView.h"
#include "GADEventContext.h"
#include "GADPresenting-Protocol.h"
#include "GADWebViewController.h"
#include "GADWebViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIViewController, UIWindowScene;

@interface GADBrowserViewController : UIViewController <GADWebViewControllerDelegate, GADPresenting> {
    /* instance variables */
    GADAdContent *_ad;
    GADActionURLHandler *_actionURLHandler;
    GADBrowserView *_browserView;
    GADWebViewController *_webViewController;
    unsigned long long _supportedInterfaceOrientations;
    NSMutableArray *_controllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) GADEventContext *context;

/* instance methods */
- (id)initWithAd:(id)ad supportedInterfaceOrientations:(unsigned long long)orientations;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)disappear;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateProgressBar;
- (void)setWebViewUserInterfaceHandlers;
- (void)loadURL:(id)url referringURL:(id)url;
- (void)refreshHeader;
- (_Bool)shouldAutorotate;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(id)controller completion:(id /* block */)completion;
- (void)relinquishScreenWithCompletion:(id /* block */)completion;
- (void)openURL:(id)url;
- (_Bool)webViewController:(id)controller shouldStartLoadWithRequest:(id)request navigationType:(long long)type;
- (void)webViewController:(id)controller openNewTabWithRequest:(id)request;
- (void)webViewControllerDidStartLoad:(id)load;
- (void)webViewControllerDidFinishLoad:(id)load;
- (void)webViewController:(id)controller didFailLoadWithError:(id)error;
- (void)webViewControllerWebContentProcessDidTerminate:(id)terminate;

@end

#endif /* GADBrowserViewController_h */
