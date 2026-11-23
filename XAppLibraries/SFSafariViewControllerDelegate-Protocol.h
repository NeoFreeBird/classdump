//
#ifndef SFSafariViewControllerDelegate_Protocol_h
#define SFSafariViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol SFSafariViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)safariViewController:(id)controller activityItemsForURL:(id)url title:(id)title;
- (id)safariViewController:(id)controller activityItemsForURL:(id)url title:(id)title;
- (id)safariViewController:(id)controller excludedActivityTypesForURL:(id)url title:(id)title;
- (id)safariViewController:(id)controller excludedActivityTypesForURL:(id)url title:(id)title;
- (void)safariViewControllerDidFinish:(id)finish;
- (void)safariViewController:(id)controller didCompleteInitialLoad:(_Bool)load;
- (void)safariViewController:(id)controller initialLoadDidRedirectToURL:(id)url;
- (void)safariViewController:(id)controller initialLoadDidRedirectToURL:(id)url;
- (void)safariViewControllerWillOpenInBrowser:(id)browser;

@end

#endif /* SFSafariViewControllerDelegate_Protocol_h */
