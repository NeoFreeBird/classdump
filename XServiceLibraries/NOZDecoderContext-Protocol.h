//
#ifndef NOZDecoderContext_Protocol_h
#define NOZDecoderContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NOZDecoderContext <NSObject>

@required

/* required instance methods */
- (_Bool)hasFinished;

@optional

@end

#endif /* NOZDecoderContext_Protocol_h */
