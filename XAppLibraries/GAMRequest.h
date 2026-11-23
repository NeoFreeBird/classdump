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
