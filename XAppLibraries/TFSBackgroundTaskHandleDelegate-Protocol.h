//
#ifndef TFSBackgroundTaskHandleDelegate_Protocol_h
#define TFSBackgroundTaskHandleDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSBackgroundTaskHandleDelegate <NSObject>

@required

/* required instance methods */
- (void)backgroundTaskHandleWillBeDeallocated:(id)deallocated;

@optional

@end

#endif /* TFSBackgroundTaskHandleDelegate_Protocol_h */
