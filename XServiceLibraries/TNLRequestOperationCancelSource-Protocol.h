//
#ifndef TNLRequestOperationCancelSource_Protocol_h
#define TNLRequestOperationCancelSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequestOperationCancelSource <NSObject>

@required

/* required instance methods */
- (id)tnl_cancelSourceDescription;

@optional

/* optional instance methods */
- (id)tnl_localizedCancelSourceDescription;
- (id)tnl_cancelSourceOverrideError;

@end

#endif /* TNLRequestOperationCancelSource_Protocol_h */
