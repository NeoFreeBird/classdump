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
