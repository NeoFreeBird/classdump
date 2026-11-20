//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GAMRequest_h
#define GAMRequest_h
@import Foundation;

#include "GADRequest.h"

@class NSArray, NSString;

@interface GAMRequest : GADRequest

@property (copy, nonatomic) NSString *publisherProvidedID;
@property (copy, nonatomic) NSArray *categoryExclusions;

/* instance methods */
- (_Bool)isEqualToRequest:(id)request;

@end

#endif /* GAMRequest_h */
