//
#ifndef T1CardURLPresenter_Protocol_h
#define T1CardURLPresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardURLPresenter <NSObject>

@required

/* required instance methods */
- (void)openURL:(id)url withPresentable:(id)presentable;
- (id)openHandlerForURL:(id)url withPresentable:(id)presentable;
- (id)shareSheetViewControllerForEntityURL:(id)url context:(id)context showFromView:(id)view completion:(id /* block */)completion;
- (void)openShareActionSheetForEntityURL:(id)url context:(id)context showFromView:(id)view completion:(id /* block */)completion;

@optional

@end

#endif /* T1CardURLPresenter_Protocol_h */
