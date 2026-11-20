//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSNumberFormatter_TFSUtilities_h
#define NSNumberFormatter_TFSUtilities_h
@import Foundation;

@interface NSNumberFormatter (TFSUtilities)

/* instance methods */
- (id)tfs_stringFromNumber:(id)number;

@end

#endif /* NSNumberFormatter_TFSUtilities_h */
