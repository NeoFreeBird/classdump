//
#ifndef TFNTwitterScribeWriter_Protocol_h
#define TFNTwitterScribeWriter_Protocol_h
@import Foundation;

#include "TFSTwitterScribeWriter-Protocol.h"

@protocol TFNTwitterScribeWriter <TFSTwitterScribeWriter>

@required

/* required instance methods */
- (void)enqueueEvent:(id)event;
- (void)enqueueImpression:(id)impression eventName:(id)name query:(id)query group:(id)group;

@optional

@end

#endif /* TFNTwitterScribeWriter_Protocol_h */
