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
