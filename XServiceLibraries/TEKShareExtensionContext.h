//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKShareExtensionContext_h
#define TEKShareExtensionContext_h
@import Foundation;

@class NSArray, NSExtensionContext, NSExtensionItem, NSObject, NSString;

@interface TEKShareExtensionContext : NSObject

@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property (readonly, nonatomic) NSExtensionItem *shareExtensionItem;
@property (readonly, copy, nonatomic) NSArray *videoItemProviders;
@property (readonly, copy, nonatomic) NSArray *imageItemProviders;
@property (readonly, copy, nonatomic) NSArray *linkItemProviders;
@property (readonly, copy, nonatomic) NSString *contentText;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) _Bool isSendMessageIntent;
@property (readonly, nonatomic) _Bool hasAnyAttachableItemProviders;
@property (readonly, nonatomic) long long numberOfMediaItemProviders;

/* instance methods */
- (id)initWithExtensionContext:(id)context;

@end

#endif /* TEKShareExtensionContext_h */
