//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLPTimeProvider_h
#define TLPTimeProvider_h
@import Foundation;

#include "TLPTimeProvider-Protocol.h"

@class NSObject, NSString;

@interface TLPTimeProvider : NSObject <TLPTimeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (double)currentTime;

@end

#endif /* TLPTimeProvider_h */
