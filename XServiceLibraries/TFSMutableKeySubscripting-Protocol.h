//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSMutableKeySubscripting_Protocol_h
#define TFSMutableKeySubscripting_Protocol_h
@import Foundation;

#include "TFSKeySubscripting-Protocol.h"

@protocol TFSMutableKeySubscripting <TFSKeySubscripting>

@required

/* required instance methods */
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;

@optional

@end

#endif /* TFSMutableKeySubscripting_Protocol_h */
