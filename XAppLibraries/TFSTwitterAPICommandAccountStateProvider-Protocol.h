//
#ifndef TFSTwitterAPICommandAccountStateProvider_Protocol_h
#define TFSTwitterAPICommandAccountStateProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPICommandAccountStateProvider <NSObject>

@required

/* required instance methods */
- (long long)accountStateForAccountID:(id)id;
- (_Bool)isAccountRemovedWithID:(id)id;

@optional

@end

#endif /* TFSTwitterAPICommandAccountStateProvider_Protocol_h */
