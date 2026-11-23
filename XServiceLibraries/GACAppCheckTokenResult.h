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
