//
#ifndef T1PromptNavigationHelper_h
#define T1PromptNavigationHelper_h
@import Foundation;

@class NSObject, TFNTwitterAccount, UIViewController;

@interface T1PromptNavigationHelper : NSObject

@property (weak, nonatomic) UIViewController *controller;
@property (readonly, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithController:(id)controller account:(id)account;
- (id)initWithAccountDeferringControllerAcquisition:(id)acquisition;
- (id)init;
- (void)handleURL:(id)url;
- (void)handleURL:(id)url completion:(id /* block */)completion;
- (void)handleURL:(id)url context:(id)context completion:(id /* block */)completion;
- (id)previewURL:(id)url;

@end

#endif /* T1PromptNavigationHelper_h */
