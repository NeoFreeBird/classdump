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
