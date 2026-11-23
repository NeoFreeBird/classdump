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
