//
#ifndef TFNMarkAsViewedDelegate_Protocol_h
#define TFNMarkAsViewedDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMarkAsViewedDelegate <NSObject>

@required

/* required instance methods */
- (void)markAsViewedHelper:(id)helper didViewCells:(id)cells;
- (void)markAsViewedHelper:(id)helper didViewCells:(id)cells;

@optional

@end

#endif /* TFNMarkAsViewedDelegate_Protocol_h */
