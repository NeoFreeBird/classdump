//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSeparator_h
#define OCFSeparator_h
@import Foundation;

#include "OCFRichText.h"

@class NSObject;

@interface OCFSeparator : NSObject

@property (readonly, nonatomic) OCFRichText *label;

/* instance methods */
- (id)separatorViewWithSubtaskDataProvider:(id)provider;
- (id)separatorSpecWithSubtaskDataProvider:(id)provider;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithLabel:(id)label;
- (id)expandedSeparatorWithSubtaskDataProvider:(id)provider expander:(id)expander;

@end

#endif /* OCFSeparator_h */
