//
#ifndef OCFDateInterval_h
#define OCFDateInterval_h
@import Foundation;

@class NSDate, NSObject;

@interface OCFDateInterval : NSObject

@property (readonly, nonatomic) NSDate *min;
@property (readonly, nonatomic) NSDate *max;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFDateInterval_h */
