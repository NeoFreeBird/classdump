//
#ifndef TFNHashflagBasicProvider_h
#define TFNHashflagBasicProvider_h
@import Foundation;

#include "TFNHashflagProvider-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFNHashflagBasicProvider : NSObject <TFNHashflagProvider>

@property (readonly, copy, nonatomic) NSDictionary *hashflagsDictionary;
@property (readonly, nonatomic) long long hashflagVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHashflags:(id)hashflags hashflagVersion:(long long)version;
- (id)init;
- (id)hashflagsForHashtag:(id)hashtag;
- (id)hashtags;

@end

#endif /* TFNHashflagBasicProvider_h */
