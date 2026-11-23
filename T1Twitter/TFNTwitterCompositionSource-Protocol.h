//
#ifndef TFNTwitterCompositionSource_Protocol_h
#define TFNTwitterCompositionSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterCompositionSource <NSObject>

@required

/* required instance methods */
- (id)composition;

@optional

/* optional instance methods */
- (id)composerTooltipText;

@end

#endif /* TFNTwitterCompositionSource_Protocol_h */
