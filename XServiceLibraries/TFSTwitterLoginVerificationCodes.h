//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLoginVerificationCodes_h
#define TFSTwitterLoginVerificationCodes_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterLoginVerificationCodes : NSObject

@property (readonly, nonatomic) NSArray *codes;

/* class methods */
+ (id)loginVerificationCodesWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterLoginVerificationCodes_h */
