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
