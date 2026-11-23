//
#ifndef OCFNavigationLinkOptions_h
#define OCFNavigationLinkOptions_h
@import Foundation;

#include "OCFSubtaskDataReference.h"

@class NSArray, NSNumber, NSObject;

@interface OCFNavigationLinkOptions : NSObject

@property (readonly, nonatomic) OCFSubtaskDataReference *countSubtaskDataReference;
@property (readonly, nonatomic) NSArray *labelConditionalText;
@property (readonly, nonatomic) NSNumber *minEnableCount;
@property (readonly, nonatomic) NSNumber *maxEnableCount;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFNavigationLinkOptions_h */
