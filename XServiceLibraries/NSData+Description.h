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
