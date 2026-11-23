//
#ifndef TFSTwitterOAuthRequestTokenScopeItem_h
#define TFSTwitterOAuthRequestTokenScopeItem_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFSTwitterOAuthRequestTokenScopeItem : NSObject

@property (readonly, copy, nonatomic) NSString *itemDescription;
@property (readonly, copy, nonatomic) NSArray *subItems;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)toBulletString;

@end

#endif /* TFSTwitterOAuthRequestTokenScopeItem_h */
