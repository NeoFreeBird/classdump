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
