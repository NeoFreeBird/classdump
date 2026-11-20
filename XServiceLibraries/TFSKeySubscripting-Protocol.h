//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSKeySubscripting_Protocol_h
#define TFSKeySubscripting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSKeySubscripting <NSObject>

@required

/* required instance methods */
- (id)objectForKeyedSubscript:(id)subscript;

@optional

@end

#endif /* TFSKeySubscripting_Protocol_h */
