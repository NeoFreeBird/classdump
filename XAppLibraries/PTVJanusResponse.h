//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusResponse_h
#define PTVJanusResponse_h
@import Foundation;

@class NSError, NSObject, NSString;

@interface PTVJanusResponse : NSObject

@property (nonatomic) unsigned long long result;
@property (nonatomic) unsigned long long sessionId;
@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) NSError *responseError;

/* class methods */
+ (id)responseFromJSONDictionary:(id)jsondictionary;
+ (unsigned long long)resultTypeFromJSON:(id)json;
+ (id)responseErrorFromJSON:(id)json;

/* instance methods */

@end

#endif /* PTVJanusResponse_h */
