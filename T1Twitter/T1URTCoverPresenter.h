//
#ifndef T1URTCoverPresenter_h
#define T1URTCoverPresenter_h
@import Foundation;

@class NSObject;

@interface T1URTCoverPresenter : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *presentingViewController;
    NSNumber"16@0:8 *dataSource;
    NSNumber"16@0:8 *cacheUnprocessedCovers;
    NSNumber"16@0:8 *unprocessedCover;
    NSNumber"16@0:8 *unprocessedActionUID;
    NSNumber"16@0:8 *lastPresentedDate;
}

/* instance methods */
- (id)initWithAccount:(id)account presentingViewController:(id)controller cacheUnprocessedCovers:(_Bool)covers;
- (void)presentUnprocessedCover;
- (id)init;

@end

#endif /* T1URTCoverPresenter_h */
