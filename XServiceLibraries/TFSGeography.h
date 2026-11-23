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
