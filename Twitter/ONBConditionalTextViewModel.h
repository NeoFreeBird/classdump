//
#ifndef ONBConditionalTextViewModel_h
#define ONBConditionalTextViewModel_h
@import Foundation;

#include "OCFSubtaskDataProvider-Protocol.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface ONBConditionalTextViewModel : NSObject

@property (readonly, nonatomic) NSNumber *minEnableCount;
@property (readonly, nonatomic) NSNumber *maxEnableCount;
@property (readonly, nonatomic) NSArray *labelConditionalText;
@property (readonly, nonatomic) NSString *defaultText;
@property (readonly, weak, nonatomic) id <OCFSubtaskDataProvider> subtaskDataProvider;

/* instance methods */
- (id)initWithMinEnableCount:(id)count maxEnableCount:(id)count labelConditionalText:(id)text defaultText:(id)text subtaskDataProvider:(id)provider;
- (id)init;
- (_Bool)isEnabledForQuantity:(long long)quantity;
- (id)textForQuantity:(long long)quantity;
- (id)expandedRichTextForQuantity:(long long)quantity;

@end

#endif /* ONBConditionalTextViewModel_h */
