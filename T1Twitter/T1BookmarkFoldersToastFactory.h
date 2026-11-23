//
#ifndef T1BookmarkFoldersToastFactory_h
#define T1BookmarkFoldersToastFactory_h
@import Foundation;

@class NSObject;

@interface T1BookmarkFoldersToastFactory : NSObject // (Swift)

/* class methods */
+ (void)presentBookmarkFoldersForStatus:(id)status account:(id)account presenter:(id)presenter;

/* instance methods */
- (id)init;

@end

#endif /* T1BookmarkFoldersToastFactory_h */
