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
