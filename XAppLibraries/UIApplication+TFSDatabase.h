//
#ifndef UIApplication_TFSDatabase_h
#define UIApplication_TFSDatabase_h
@import Foundation;

@interface UIApplication (TFSDatabase)

/* class methods */
+ (long long)ptv_interfaceOrientation;
+ (double)ptv_standardStatusBarHeightForInterfaceOrientation:(long long)orientation;

/* instance methods */
- (id)tlt_sharedDatabaseUIApplicationLink;

@end

#endif /* UIApplication_TFSDatabase_h */
