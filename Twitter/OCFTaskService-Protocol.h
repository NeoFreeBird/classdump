//
#ifndef OCFTaskService_Protocol_h
#define OCFTaskService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFTaskService <NSObject>

@required

/* required instance methods */
- (id)sendPreviousTask:(id)task withState:(id)state forAccountID:(id)id terminationReason:(long long)reason debugParameters:(id)parameters headerFields:(id)fields fetchNextTaskWithResponseBlock:(id /* block */)block;

@optional

@end

#endif /* OCFTaskService_Protocol_h */
