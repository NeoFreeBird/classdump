//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCustomEventRequest_h
#define GADCustomEventRequest_h
@import Foundation;

@class NSArray, NSDictionary, NSObject;

@interface GADCustomEventRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *userKeywords;
@property (readonly, copy, nonatomic) NSDictionary *additionalParameters;
@property (readonly, nonatomic) _Bool isTesting;

/* instance methods */
- (id)initWithTargeting:(id)targeting extrasLabel:(id)label;

@end

#endif /* GADCustomEventRequest_h */
