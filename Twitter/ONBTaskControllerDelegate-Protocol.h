//
#ifndef ONBTaskControllerDelegate_Protocol_h
#define ONBTaskControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBTaskControllerDelegate

@required

/* required instance methods */
- (id)hudWindowForTaskController:(id)controller;
- (id)currentWindowForTaskController:(id)controller;
- (id)taskController:(id)controller pushViewController:(id)controller withPresentationType:(long long)type backNavigationLinkBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)taskController:(id)controller presentViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)taskController:(id)controller waitWithMessage:(id)message;
- (void)taskControllerStopWaiting:(id)waiting;
- (void)taskControllerDidFinish:(id)finish withNavigationLink:(id)link listener:(id /* block */)listener;
- (void)taskController:(id)controller willStartSubtaskController:(id)controller;
- (void)taskController:(id)controller didFinishSubtaskController:(id)controller;
- (void)taskController:(id)controller restoreSubtaskController:(id)controller isDestructive:(_Bool)destructive completion:(id /* block */)completion;
- (id)currentSubtaskControllerForTaskController:(id)controller;
- (id)taskController:(id)controller controllerForSubtaskWithID:(id)id inCurrentTaskOnly:(_Bool)only;
- (void)taskController:(id)controller handleWebURL:(id)url withTitle:(id)title chromeless:(_Bool)chromeless;
- (void)taskController:(id)controller handleDeepLinkInPlaceURL:(id)url;
- (void)taskController:(id)controller handleDeepLinkURL:(id)url;
- (id)currentAccountForTaskController:(id)controller;
- (void)taskController:(id)controller didChangeCurrentAccount:(id)account;
- (void)viewCurrentAccountForTaskController:(id)controller completion:(id /* block */)completion;
- (id)taskController:(id)controller stateValueForKey:(id)key;
- (void)taskController:(id)controller setStateValue:(id)value forKey:(id)key;
- (void)taskController:(id)controller setFlowOverrideLanguage:(id)language;
- (void)taskController:(id)controller setFlowStatus:(long long)status;
- (void)taskController:(id)controller registerEndOfFlowAction:(id /* block */)action;
- (void)taskController:(id)controller didFailWithFlowError:(id)error;
- (_Bool)taskControllerDidLoadFromTestFixture:(id)fixture;
- (long long)componentCollectionViewModelOptionsForTaskController:(id)controller;

@optional

/* optional instance methods */
- (void)taskControllerDidCancelFlow:(id)flow;

@end

#endif /* ONBTaskControllerDelegate_Protocol_h */
