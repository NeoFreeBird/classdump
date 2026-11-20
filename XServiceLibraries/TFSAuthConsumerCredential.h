//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthConsumerCredential_h
#define TFSAuthConsumerCredential_h
@import Foundation;

@class NSObject, NSString;

@interface TFSAuthConsumerCredential : NSObject

@property (readonly, copy, nonatomic) NSString *oAuthConsumerKey;
@property (readonly, copy, nonatomic) NSString *oAuthConsumerSecret;

/* instance methods */
- (id)initWithOAuthConsumerKey:(id)key oAuthConsumerSecret:(id)secret;
- (_Bool)isEqual:(id)equal;
- (_Bool)hasTokens;

@end

#endif /* TFSAuthConsumerCredential_h */
