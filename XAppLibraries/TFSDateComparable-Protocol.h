//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
