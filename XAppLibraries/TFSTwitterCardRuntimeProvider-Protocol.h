//
#ifndef TFSTwitterCardRuntimeProvider_Protocol_h
#define TFSTwitterCardRuntimeProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterCardRuntime-Protocol.h"

@protocol TFSTwitterCardRuntimeProvider <NSObject>

@required

@property (readonly, nonatomic) id <TFSTwitterCardRuntime> cardRuntime;

@optional

@end

#endif /* TFSTwitterCardRuntimeProvider_Protocol_h */
