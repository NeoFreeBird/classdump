//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
