//
#ifndef T1CardUserPresenter_Protocol_h
#define T1CardUserPresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardUserPresenter <NSObject>

@required

/* required instance methods */
- (void)presentViewControllerForUserReference:(id)reference context:(id)context;

@optional

@end

#endif /* T1CardUserPresenter_Protocol_h */
