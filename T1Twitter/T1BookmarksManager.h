//
#ifndef T1BookmarksManager_h
#define T1BookmarksManager_h
@import Foundation;

@class NSObject;

@interface T1BookmarksManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *manager;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)addStatusToBookmarks:(id)bookmarks sourceView:(id)view withScribeContext:(id)context completion:(id /* block */)completion;
- (void)removeStatusFromBookmarks:(id)bookmarks withScribeContext:(id)context completion:(id /* block */)completion;
- (void)removeAllStatusesFromBookmarksWithScribeContext:(id)context completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1BookmarksManager_h */
