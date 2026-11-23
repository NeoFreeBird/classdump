//
#ifndef TFSTwitterXAuthChallengeResponse_h
#define TFSTwitterXAuthChallengeResponse_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterXAuthChallengeResponse : NSObject

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *tokenSecret;
@property (readonly, copy, nonatomic) NSString *screenName;
@property (readonly, nonatomic) long long userId;
@property (readonly, copy, nonatomic) NSString *knownDeviceToken;

/* class methods */
+ (id)xauthChallengeResponseWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterXAuthChallengeResponse_h */
