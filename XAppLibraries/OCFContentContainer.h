//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFContentContainer_h
#define OCFContentContainer_h
@import Foundation;

#include "OCFButton.h"
#include "OCFHeader.h"
#include "OCFRichText.h"

@class NSObject;

@interface OCFContentContainer : NSObject

@property (readonly, nonatomic) OCFHeader *header;
@property (readonly, nonatomic) OCFRichText *noContentText;
@property (readonly, nonatomic) OCFButton *noContentButton;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFContentContainer_h */
