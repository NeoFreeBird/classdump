//
#ifndef TFNTwitterScribeGlobalParameterProvider_Protocol_h
#define TFNTwitterScribeGlobalParameterProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterScribeGlobalParameterProvider <NSObject>

@required

/* required instance methods */
- (id)updateScribeParameters:(id)parameters;

@optional

@end

#endif /* TFNTwitterScribeGlobalParameterProvider_Protocol_h */
