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
