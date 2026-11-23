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
