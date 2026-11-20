//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTweetTextCounterContext_Protocol_h
#define TFSTweetTextCounterContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTweetTextCounterContext <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *textForCharacterCount;

@optional

@end

#endif /* TFSTweetTextCounterContext_Protocol_h */
