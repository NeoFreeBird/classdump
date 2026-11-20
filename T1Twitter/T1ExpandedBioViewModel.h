//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ExpandedBioViewModel_h
#define T1ExpandedBioViewModel_h
@import Foundation;

@class NSObject;

@interface T1ExpandedBioViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileUserId;
    NSNumber"16@0:8 *blockID;
    NSNumber"16@0:8 *expandedBioJSON;
    NSNumber"16@0:8 *loading;
    NSNumber"16@0:8 *loadError;
    NSNumber"16@0:8 *loaded;
}

/* instance methods */
- (id)initWithAccount:(id)account profileUserId:(long long)id;
- (id)init;

@end

#endif /* T1ExpandedBioViewModel_h */
