//
#ifndef T1JobListViewModel_h
#define T1JobListViewModel_h
@import Foundation;

@class NSObject;

@interface T1JobListViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *userDataSource;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileUserId;
    NSNumber"16@0:8 *jobs;
    NSNumber"16@0:8 *nextCursor;
    NSNumber"16@0:8 *totalCount;
    NSNumber"16@0:8 *loading;
    NSNumber"16@0:8 *loadError;
    NSNumber"16@0:8 *$__lazy_storage_$_actionService;
}

/* instance methods */
- (id)initWithAccount:(id)account userDataSource:(id)source;
- (id)init;

@end

#endif /* T1JobListViewModel_h */
