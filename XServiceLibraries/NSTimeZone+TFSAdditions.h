//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSTimeZone_TFSAdditions_h
#define NSTimeZone_TFSAdditions_h
@import Foundation;

@interface NSTimeZone (TFSAdditions)

/* class methods */
+ (id)_tfs_timezoneQueue;
+ (id)tfs_utcOffsetOfDate:(id)date timezone:(id)timezone;
+ (id)tfs_utcOffsetFromCurrentTime;

@end

#endif /* NSTimeZone_TFSAdditions_h */
