//
#ifndef PTVModelSessionTask_Protocol_h
#define PTVModelSessionTask_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVModelSessionTaskContext;

@protocol PTVModelSessionTask <NSObject>

@required

@property (readonly, nonatomic) id <PTVModelSessionTaskContext> ptv_context;

/* required instance methods */
- (void)ptv_start;

@optional

@end

#endif /* PTVModelSessionTask_Protocol_h */
