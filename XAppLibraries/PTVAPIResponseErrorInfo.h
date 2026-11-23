//
#ifndef PTVAPIResponseErrorInfo_h
#define PTVAPIResponseErrorInfo_h
@import Foundation;

@class NSDictionary, NSObject, NSString, NSURL;

@interface PTVAPIResponseErrorInfo : NSObject

@property (readonly, nonatomic) NSDictionary *errorInfo;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) long long banReason;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSURL *rectifyURL;

/* class methods */
+ (id)errorInfoFromError:(id)error;
+ (id)embeddedErrorInfoDictionaryFromResponseDictionary:(id)dictionary;
+ (id)errorInfoFromResponseDictionary:(id)dictionary;
+ (id)rectifyURLFromErrorInfo:(id)info;
+ (id)rectifyURLFromEmbeddedErrorInfo:(id)info;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)init;

@end

#endif /* PTVAPIResponseErrorInfo_h */
