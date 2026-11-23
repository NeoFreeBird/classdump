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
