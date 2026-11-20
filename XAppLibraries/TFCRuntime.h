//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFCRuntime_h
#define TFCRuntime_h
@import Foundation;

#include "TFSTwitterCardRuntime-Protocol.h"

@class NSObject, NSString;

@interface TFCRuntime : NSObject <TFSTwitterCardRuntime>

@property (readonly, nonatomic) _Bool platformIdentifierChangedSinceLastLaunch;
@property (readonly, nonatomic) NSString *platformIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;

@end

#endif /* TFCRuntime_h */
