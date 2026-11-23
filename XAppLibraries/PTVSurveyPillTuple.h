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
