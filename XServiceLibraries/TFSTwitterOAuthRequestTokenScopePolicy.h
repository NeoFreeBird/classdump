//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterOAuthRequestTokenScopePolicy_h
#define TFSTwitterOAuthRequestTokenScopePolicy_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterOAuthRequestTokenScopePolicy : NSObject

@property (readonly, copy, nonatomic) NSArray *can;
@property (readonly, copy, nonatomic) NSArray *cannot;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)init;

@end

#endif /* TFSTwitterOAuthRequestTokenScopePolicy_h */
