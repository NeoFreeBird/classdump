//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
