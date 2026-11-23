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
