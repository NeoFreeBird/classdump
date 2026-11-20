//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFImage_h
#define OCFImage_h
@import Foundation;

#include "OCFImageInfo.h"

@class NSObject, NSString;

@interface OCFImage : NSObject

@property (readonly, nonatomic) OCFImageInfo *imageInfo;
@property (readonly, nonatomic) NSString *placeholder;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFImage_h */
