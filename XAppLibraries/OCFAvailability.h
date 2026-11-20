//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFAvailability_h
#define OCFAvailability_h
@import Foundation;

@class NSObject, NSString;

@interface OCFAvailability : NSObject

@property (nonatomic) _Bool valid;
@property (copy, nonatomic) NSString *message;

/* class methods */
+ (id)availabilityWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (_Bool)isValid;

@end

#endif /* OCFAvailability_h */
