//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
