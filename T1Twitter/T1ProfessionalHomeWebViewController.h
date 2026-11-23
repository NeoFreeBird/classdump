//
#ifndef T1ProfessionalHomeWebViewController_h
#define T1ProfessionalHomeWebViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1ProfessionalHomeWebViewController : T1WebViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *kProfessionalHomePathPrefix;
    NSNumber"16@0:8 *$__lazy_storage_$_backButton;
}

@property (nonatomic, readonly) _Bool hasCustomNavigationBar;

/* instance methods */
- (void)backButtonActionWithSender:(id)sender;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (void)viewDidLoad;
- (id)initWithRootURL:(id)url account:(id)account;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;

@end

#endif /* T1ProfessionalHomeWebViewController_h */
