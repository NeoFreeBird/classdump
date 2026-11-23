//
#ifndef TFSLogger_Protocol_h
#define TFSLogger_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSLogger <NSObject>

@required

/* required instance methods */
- (void)logWithLevel:(long long)level file:(id)file function:(id)function line:(int)line contextObject:(id)object format:(id)format;
- (_Bool)canLogWithLevel:(long long)level contextObject:(id)object;

@optional

@end

#endif /* TFSLogger_Protocol_h */
