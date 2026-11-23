//
#ifndef T1CardURLPresenter_h
#define T1CardURLPresenter_h
@import Foundation;

#include "T1CardURLPresenter-Protocol.h"

@class NSObject, NSString;

@interface T1CardURLPresenter : NSObject <T1CardURLPresenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)openHandlerForURL:(id)url withPresentable:(id)presentable;
- (void)openURL:(id)url withPresentable:(id)presentable;
- (void)openURL:(id)url withPresentable:(id)presentable sourceView:(id)view;
- (id)shareSheetViewControllerForEntityURL:(id)url context:(id)context showFromView:(id)view completion:(id /* block */)completion;
- (void)openShareActionSheetForEntityURL:(id)url context:(id)context showFromView:(id)view completion:(id /* block */)completion;

@end

#endif /* T1CardURLPresenter_h */
