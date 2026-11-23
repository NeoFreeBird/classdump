//
#ifndef TEKAccountCoding_h
#define TEKAccountCoding_h
@import Foundation;

#include "TFSTwitterAccountCoding-Protocol.h"

@class NSObject;

@interface TEKAccountCoding : NSObject <TFSTwitterAccountCoding>

/* instance methods */
- (id)decode:(id)decode;
- (id)encode:(id)encode;

@end

#endif /* TEKAccountCoding_h */
