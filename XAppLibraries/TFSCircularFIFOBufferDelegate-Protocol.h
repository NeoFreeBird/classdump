//
#ifndef TFSCircularFIFOBufferDelegate_Protocol_h
#define TFSCircularFIFOBufferDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSCircularFIFOBufferDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)circularFIFOBuffer:(id)fifobuffer purgedObject:(id)object;

@end

#endif /* TFSCircularFIFOBufferDelegate_Protocol_h */
