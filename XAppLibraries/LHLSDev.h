//
#ifndef LHLSDev_h
#define LHLSDev_h
@import Foundation;

@class NSObject;

@interface LHLSDev : NSObject

/* class methods */
+ (_Bool)breakOnAssert;
+ (void)setBreakOnAssert:(_Bool)assert;
+ (_Bool)testTurkey;
+ (void)setTestTurkey:(_Bool)turkey;

@end

#endif /* LHLSDev_h */
