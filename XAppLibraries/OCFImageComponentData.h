//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFImageComponentData_h
#define OCFImageComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFImage.h"

@interface OCFImageComponentData : OCFComponentData

@property (readonly, nonatomic) OCFImage *image;
@property (readonly, nonatomic) long long imageType;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithImage:(id)image imageType:(long long)type;
- (_Bool)isComponentFullBleedTop;

@end

#endif /* OCFImageComponentData_h */
