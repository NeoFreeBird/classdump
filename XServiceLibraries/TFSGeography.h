//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSGeography_h
#define TFSGeography_h
@import Foundation;

@class NSObject;

@interface TFSGeography : NSObject // (Swift)

/* class methods */
+ (id)localizedUSStateForAbbreviation:(id)abbreviation;

/* instance methods */
- (id)init;

@end

#endif /* TFSGeography_h */
