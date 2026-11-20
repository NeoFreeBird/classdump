//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserViewSubscribeControlProvider_h
#define T1UserViewSubscribeControlProvider_h
@import Foundation;

#include "T1SuperFollowControlDelegate-Protocol.h"
#include "T1UserViewActionControlProvider-Protocol.h"
#include "_TtC14T1TwitterSwift30SuperFollowButtonActionHandler.h"

@class NSObject, NSString, TFNTwitterAccount, TFSTwitterScribeContext, UIViewController;

@interface T1UserViewSubscribeControlProvider : NSObject <T1SuperFollowControlDelegate, T1UserViewActionControlProvider>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1TwitterSwift.SuperFollowButtonActionHandler *superFollowButtonActionHandler;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) _Bool isSubscribableUser;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ needsLayoutBlock;

/* instance methods */
- (id)initWithAccount:(id)account viewController:(id)controller scribeContext:(id)context isSubscribableUser:(_Bool)user;
- (void)updateActionControl:(id)control viewModel:(id)model;
- (void)cleanupActionControl:(id)control;
- (id)actionControlForUserView:(id)view withUpdateBlock:(id /* block */)block;
- (struct CGSize { double x0; double x1; })sizeForActionControlWithUser:(id)user;
- (_Bool)shouldHideActionControl:(id)control;
- (void)superFollowControlDidTap:(id)tap;

@end

#endif /* T1UserViewSubscribeControlProvider_h */
