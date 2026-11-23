//
#ifndef T1ShareMenuActionItemProvider_h
#define T1ShareMenuActionItemProvider_h
@import Foundation;

@class NSObject;

@interface T1ShareMenuActionItemProvider : NSObject

/* class methods */
+ (id)shareMenuActionItemsWithTweetActionItemDetailsProvider:(id)provider shareViaDMActionItemDetailsProvider:(id)provider shareViaActionItemDetailsProvider:(id)provider additionalActionItems:(id)items presentingViewController:(id)controller sourceView:(id)view account:(id)account scribeContext:(id)context completion:(id /* block */)completion;
+ (id)shareMenuActionItemsWithTweetActionItemDetailsProvider:(id)provider shareViaDMActionItemDetailsProvider:(id)provider shareViaActionItemDetailsProvider:(id)provider additionalActionItems:(id)items presentingViewController:(id)controller popoverSourceInfo:(id)info account:(id)account scribeContext:(id)context completion:(id /* block */)completion;

@end

#endif /* T1ShareMenuActionItemProvider_h */
