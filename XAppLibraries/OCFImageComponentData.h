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
