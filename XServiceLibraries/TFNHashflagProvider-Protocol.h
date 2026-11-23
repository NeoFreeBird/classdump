//
#ifndef TFNHashflagProvider_Protocol_h
#define TFNHashflagProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNHashflagProvider <NSObject>

@required

/* required instance methods */
- (id)hashflagsForHashtag:(id)hashtag;
- (long long)hashflagVersion;
- (id)hashtags;

@optional

@end

#endif /* TFNHashflagProvider_Protocol_h */
