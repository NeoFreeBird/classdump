//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CameraFetchResult_h
#define T1CameraFetchResult_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSError, NSObject;

@interface T1CameraFetchResult : NSObject

@property (retain, nonatomic) id <NSObject> result;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithResult:(id)result;
- (id)initWithState:(unsigned long long)state error:(id)error;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1CameraFetchResult_h */
