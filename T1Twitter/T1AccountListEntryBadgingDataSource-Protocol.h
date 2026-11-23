//
#ifndef T1AccountListEntryBadgingDataSource_Protocol_h
#define T1AccountListEntryBadgingDataSource_Protocol_h
@import Foundation;

@protocol T1AccountListEntryBadgingDataSource

@required

/* required instance methods */
- (id)badgeCountForEntry:(id)entry;

@optional

@end

#endif /* T1AccountListEntryBadgingDataSource_Protocol_h */
