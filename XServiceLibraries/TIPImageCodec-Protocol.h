//
#ifndef TIPImageCodec_Protocol_h
#define TIPImageCodec_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageCodec <NSObject>

@required

/* required instance methods */
- (id)tip_decoder;
- (id)tip_encoder;

@optional

/* optional instance methods */
- (_Bool)tip_isAnimated;

@end

#endif /* TIPImageCodec_Protocol_h */
