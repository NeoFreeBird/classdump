//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserViewActionControlProvider_Protocol_h
#define T1UserViewActionControlProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UserViewActionControlProvider <NSObject>

@required

@property (nonatomic, copy) id /* block */ needsLayoutBlock;

/* required instance methods */
- (id)actionControlForUserView:(id)view withUpdateBlock:(id /* block */)block;
- (id)actionControlForUserView:(id)view withUpdateBlock:(id /* block */)block;
- (struct CGSize { double x0; double x1; })sizeForActionControlWithUser:(id)user;
- (struct CGSize { double x0; double x1; })sizeForActionControlWithUser:(id)user;
- (_Bool)shouldHideActionControl:(id)control;
- (void)updateActionControl:(id)control viewModel:(id)model;
- (void)cleanupActionControl:(id)control;

@optional

@end

#endif /* T1UserViewActionControlProvider_Protocol_h */
