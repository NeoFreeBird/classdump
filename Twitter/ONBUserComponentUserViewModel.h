//
#ifndef ONBUserComponentUserViewModel_h
#define ONBUserComponentUserViewModel_h
@import Foundation;

@class NSString, T1StandardUserViewModel;

@interface ONBUserComponentUserViewModel : T1StandardUserViewModel {
    /* instance variables */
    NSString *_displayUsername;
}

/* instance methods */
- (id)initWithUser:(id)user displayUsername:(id)username;
- (id)displayUsername;

@end

#endif /* ONBUserComponentUserViewModel_h */
