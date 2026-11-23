//
#ifndef TFCCreatedCardData_h
#define TFCCreatedCardData_h
@import Foundation;

@class NSObject, NSString;

@interface TFCCreatedCardData : NSObject

@property (retain, nonatomic) NSString *URI;
@property (retain, nonatomic) NSString *status;

/* class methods */
+ (id)cardCreatedDataForResponseData:(id)data error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFCCreatedCardData_h */
