//
#ifndef T1DashPresenter_Protocol_h
#define T1DashPresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1DashPresenter <NSObject>

@required

@property (nonatomic, readonly) _Bool dashOpen;
@property (nonatomic, readonly) _Bool dashOpen;

/* required instance methods */
- (void)presentDashFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)presentDashFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)dismissDashAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)dismissDashAnimated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)isDashOpen;
- (_Bool)isDashOpen;

@optional

@end

#endif /* T1DashPresenter_Protocol_h */
