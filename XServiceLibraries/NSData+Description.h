//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_Description_h
#define NSData_Description_h
@import Foundation;

@interface NSData (Description)

/* class methods */
+ (void)load;
+ (_Bool)shortDescriptionEnabled;
+ (_Bool)setShortDescriptionEnabled:(_Bool)enabled;

/* instance methods */
- (id)_tfs_internalDescription;

@end

#endif /* NSData_Description_h */
