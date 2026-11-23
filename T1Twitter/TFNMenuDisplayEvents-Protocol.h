//
#ifndef TFNMenuDisplayEvents_Protocol_h
#define TFNMenuDisplayEvents_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuDisplayEvents <NSObject>

@required

@property (nonatomic, copy) id /* block */ willDisplayMenuBlock;
@property (nonatomic, copy) id /* block */ willDismissMenuBlock;

@optional

@end

#endif /* TFNMenuDisplayEvents_Protocol_h */
