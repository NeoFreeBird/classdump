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
