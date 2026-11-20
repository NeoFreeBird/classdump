//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
