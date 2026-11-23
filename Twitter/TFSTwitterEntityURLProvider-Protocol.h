//
#ifndef TFSTwitterEntityURLProvider_Protocol_h
#define TFSTwitterEntityURLProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterEntityURLProvider <NSObject>

@required

/* required instance methods */
- (id)entityForURL:(id)url;

@optional

@end

#endif /* TFSTwitterEntityURLProvider_Protocol_h */
