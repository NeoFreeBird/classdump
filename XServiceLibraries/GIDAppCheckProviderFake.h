//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDAppCheckProviderFake_h
#define GIDAppCheckProviderFake_h
@import Foundation;

#include "GACAppCheckProvider-Protocol.h"
#include "GACAppCheckToken.h"

@class NSError, NSObject, NSString;

@interface GIDAppCheckProviderFake : NSObject <GACAppCheckProvider>

@property (retain, nonatomic) GACAppCheckToken *token;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppCheckToken:(id)token error:(id)error;
- (void)getTokenWithCompletion:(id /* block */)completion;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)completion;

@end

#endif /* GIDAppCheckProviderFake_h */
