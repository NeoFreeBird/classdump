//
#ifndef TFSTwitterCardRuntime_Protocol_h
#define TFSTwitterCardRuntime_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTwitterCardRuntime <NSObject>

@required

@property (readonly, nonatomic) NSString *platformIdentifier;

@optional

@end

#endif /* TFSTwitterCardRuntime_Protocol_h */
