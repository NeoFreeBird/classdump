//
#ifndef TFSDateComparable_Protocol_h
#define TFSDateComparable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSDateComparable <NSObject>

@required

/* required instance methods */
- (id)comparableDate;
- (long long)compare:(id)compare;

@optional

@end

#endif /* TFSDateComparable_Protocol_h */
