//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
