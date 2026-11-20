//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTransportException_h
#define TTransportException_h
@import Foundation;

#include "TException.h"

@interface TTransportException : TException

/* class methods */
+ (id)exceptionWithReason:(id)reason error:(id)error;
+ (id)exceptionWithReason:(id)reason;

@end

#endif /* TTransportException_h */
