//
#ifndef TNUHTTPHeaderFieldRedactionDelegate_Protocol_h
#define TNUHTTPHeaderFieldRedactionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNUHTTPHeaderFieldRedactionDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)har_shouldRedactHTTPHeaderField:(id)field;

@optional

@end

#endif /* TNUHTTPHeaderFieldRedactionDelegate_Protocol_h */
