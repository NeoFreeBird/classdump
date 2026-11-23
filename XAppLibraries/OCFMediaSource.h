//
#ifndef OCFMediaSource_h
#define OCFMediaSource_h
@import Foundation;

#include "OCFSubtaskDataReference.h"

@class NSObject;

@interface OCFMediaSource : NSObject

@property (readonly, nonatomic) OCFSubtaskDataReference *mediaDataReference;
@property (readonly, nonatomic) long long style;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFMediaSource_h */
