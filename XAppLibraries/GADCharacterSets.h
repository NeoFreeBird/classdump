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
