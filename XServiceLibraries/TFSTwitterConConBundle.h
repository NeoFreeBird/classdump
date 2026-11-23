//
#ifndef TFSTwitterConConBundle_h
#define TFSTwitterConConBundle_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface TFSTwitterConConBundle : NSObject

@property (readonly, nonatomic) NSString *dtabs;
@property (readonly, nonatomic) NSDictionary *featureSwitches;

/* class methods */
+ (id)bundleResponseWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterConConBundle_h */
