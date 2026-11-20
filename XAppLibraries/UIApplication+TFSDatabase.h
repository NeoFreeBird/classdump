//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
