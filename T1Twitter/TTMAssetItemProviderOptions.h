//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetItemProviderOptions_h
#define TTMAssetItemProviderOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSItemProvider, NSObject, TFNTwitterAccount;

@interface TTMAssetItemProviderOptions : NSObject <NSCopying>

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (copy, nonatomic) NSArray *acceptableTypeIdentifiers;
@property (nonatomic) unsigned long long types;
@property (nonatomic) _Bool memojiCanvasEnabled;

/* class methods */
+ (id)acceptableTypeIdentifiersForTypes:(unsigned long long)types;

/* instance methods */
- (id)init;
- (id)initWithItemProvider:(id)provider account:(id)account;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isMemojiCanvasEnabled;

@end

#endif /* TTMAssetItemProviderOptions_h */
