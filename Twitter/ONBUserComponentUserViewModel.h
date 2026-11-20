//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
