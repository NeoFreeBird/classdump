//
#ifndef PTVReplayWorkerDelegate_Protocol_h
#define PTVReplayWorkerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVReplayWorkerDelegate <NSObject>

@required

/* required instance methods */
- (void)processHistoryArray:(id)array;
- (void)error:(id)error;

@optional

@end

#endif /* PTVReplayWorkerDelegate_Protocol_h */
