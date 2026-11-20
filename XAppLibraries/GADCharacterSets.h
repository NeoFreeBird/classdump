//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCharacterSets_h
#define GADCharacterSets_h
@import Foundation;

@class NSCharacterSet, NSObject;

@interface GADCharacterSets : NSObject

@property (readonly) NSCharacterSet *characterDelimitedSet;
@property (readonly) NSCharacterSet *spaceDelimitedSet;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;

@end

#endif /* GADCharacterSets_h */
