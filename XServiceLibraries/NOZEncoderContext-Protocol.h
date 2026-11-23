//
#ifndef NOZEncoderContext_Protocol_h
#define NOZEncoderContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NOZEncoderContext <NSObject>

@required

/* required instance methods */
- (_Bool)encodedDataWasText;

@optional

@end

#endif /* NOZEncoderContext_Protocol_h */
