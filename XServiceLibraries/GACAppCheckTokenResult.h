//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheckTokenResult_h
#define GACAppCheckTokenResult_h
@import Foundation;

#include "GACAppCheckToken.h"

@class NSError, NSObject;

@interface GACAppCheckTokenResult : NSObject

@property (readonly, nonatomic) GACAppCheckToken *token;
@property (readonly, nonatomic) NSError *error;

/* class methods */
+ (id)placeholderToken;

/* instance methods */
- (id)initWithToken:(id)token error:(id)error;
- (id)initWithToken:(id)token;
- (id)initWithError:(id)error;

@end

#endif /* GACAppCheckTokenResult_h */
