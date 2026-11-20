//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
