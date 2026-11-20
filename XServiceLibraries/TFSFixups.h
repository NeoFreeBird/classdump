//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFixups_h
#define TFSFixups_h
@import Foundation;

@class NSObject;

@interface TFSFixups : NSObject

/* class methods */
+ (void)performUserInputFixups;
+ (void)swizzleStringByReplacingCharactersInRangeWithString;

@end

#endif /* TFSFixups_h */
