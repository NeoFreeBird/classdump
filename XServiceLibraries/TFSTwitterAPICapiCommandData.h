//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICapiCommandData_h
#define TFSTwitterAPICapiCommandData_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface TFSTwitterAPICapiCommandData : NSObject

@property (copy, nonatomic) NSString *capiPath;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

/* instance methods */
- (id)initWithCapiURLString:(id)urlstring parameters:(id)parameters;

@end

#endif /* TFSTwitterAPICapiCommandData_h */
