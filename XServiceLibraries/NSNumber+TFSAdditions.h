//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSNumber_TFSAdditions_h
#define NSNumber_TFSAdditions_h
@import Foundation;

@interface NSNumber (TFSAdditions)

/* instance methods */
- (long long)reportActionValue;
- (id)tfs_statusIDString;
- (id)defaultFormattedString;
- (id)tfs_twitterAbbreviated;
- (id)tfs_twitterAbbreviatedLocalized;
- (id)tnl_quickStringValue;
- (_Bool)tnl_isBoolean;
- (id)tnl_booleanObject;
- (_Bool)tfs_isJSONCompliant;
- (id)tfs_thriftCompatibleObject;

@end

#endif /* NSNumber_TFSAdditions_h */
