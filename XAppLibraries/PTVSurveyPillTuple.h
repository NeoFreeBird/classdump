//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVSurveyPillTuple_h
#define PTVSurveyPillTuple_h
@import Foundation;

@class NSObject, NSString;

@interface PTVSurveyPillTuple : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

/* instance methods */
- (id)initWithKey:(id)key value:(id)value;

@end

#endif /* PTVSurveyPillTuple_h */
