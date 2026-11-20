//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
