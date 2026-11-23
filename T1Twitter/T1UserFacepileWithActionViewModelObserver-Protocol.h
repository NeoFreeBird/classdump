//
#ifndef T1UserFacepileWithActionViewModelObserver_Protocol_h
#define T1UserFacepileWithActionViewModelObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UserFacepileWithActionViewModelObserver <NSObject>

@required

/* required instance methods */
- (void)viewModelRemovedUserAtIndex:(unsigned long long)index;

@optional

/* optional instance methods */
- (void)viewModelButtonStateChanged;
- (void)viewModelDismissedAllUsers;

@end

#endif /* T1UserFacepileWithActionViewModelObserver_Protocol_h */
