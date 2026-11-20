//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFHeaderImage_h
#define OCFHeaderImage_h
@import Foundation;

#include "OCFImage.h"

@class NSObject;

@interface OCFHeaderImage : NSObject

@property (readonly, nonatomic) OCFImage *image;
@property (readonly, nonatomic) long long imageType;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFHeaderImage_h */
