//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
