//
#ifndef _TtC14T1TwitterSwift26MediaWebsiteViewController_h
#define _TtC14T1TwitterSwift26MediaWebsiteViewController_h
@import Foundation;

#include "T1WebViewController.h"

@class T1TwitterSwift.MediaContentViewControllerDelegate ?;

@interface T1TwitterSwift.MediaWebsiteViewController : T1WebViewController { // (Swift)
    /* instance variables */
    T1TwitterSwift.MediaContentViewControllerDelegate ? contentViewControllerDelegate;
}

/* instance methods */
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (void)didFinishLoadingWithError:(id)error;
- (void)willStartLoadingNavigationRequestOfType:(long long)type;
- (void)viewDidAppear:(_Bool)appear;
- (void)didMoveToParentViewController:(id)controller;
- (void)dmWithSender:(id)sender;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;

@end

#endif /* _TtC14T1TwitterSwift26MediaWebsiteViewController_h */
