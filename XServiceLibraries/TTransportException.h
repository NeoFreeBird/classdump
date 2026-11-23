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
