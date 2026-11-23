//
#ifndef TSFT1ScribeProviding_Protocol_h
#define TSFT1ScribeProviding_Protocol_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@protocol TSFT1ScribeProviding

@required

@property (nonatomic, readonly) id <TFSTwitterLegacyScribeLogMethods> scribe;

/* required instance methods */
- (id)scribeContext;

@optional

@end

#endif /* TSFT1ScribeProviding_Protocol_h */
