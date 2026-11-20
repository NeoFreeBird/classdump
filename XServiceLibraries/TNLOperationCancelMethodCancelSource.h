//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLOperationCancelMethodCancelSource_h
#define TNLOperationCancelMethodCancelSource_h
@import Foundation;

#include "TNLRequestOperationCancelSource-Protocol.h"

@class NSObject, NSString;

@interface TNLOperationCancelMethodCancelSource : NSObject <TNLRequestOperationCancelSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)tnl_cancelSourceDescription;

@end

#endif /* TNLOperationCancelMethodCancelSource_h */
