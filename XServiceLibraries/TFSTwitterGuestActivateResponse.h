//
#ifndef TFSTwitterGuestActivateResponse_h
#define TFSTwitterGuestActivateResponse_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterGuestActivateResponse : NSObject

@property (readonly, copy, nonatomic) NSString *guestToken;

/* class methods */
+ (id)guestTokenResponseWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterGuestActivateResponse_h */
