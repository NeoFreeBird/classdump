//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterStatusRemoveTaggedUserMutation_h
#define TFSTwitterStatusRemoveTaggedUserMutation_h
@import Foundation;

@class NSObject;

@interface TFSTwitterStatusRemoveTaggedUserMutation : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 statusID;
    B24@0:8@"NSString"16 userID;
}

/* instance methods */
- (id)initWithStatusID:(long long)id userID:(long long)id;
- (void)assimilateIntoModelContext:(id)context;
- (id)init;

@end

#endif /* TFSTwitterStatusRemoveTaggedUserMutation_h */
