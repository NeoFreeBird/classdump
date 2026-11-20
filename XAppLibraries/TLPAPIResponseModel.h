//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLPAPIResponseModel_h
#define TLPAPIResponseModel_h
@import Foundation;

@class NSDictionary, NSObject;

@interface TLPAPIResponseModel : NSObject

@property (retain, nonatomic) NSDictionary *topicErrors;

/* instance methods */

@end

#endif /* TLPAPIResponseModel_h */
