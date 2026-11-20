//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserAssimilatable_h
#define TFSTwitterUserAssimilatable_h
@import Foundation;

@class NSObject;

@interface TFSTwitterUserAssimilatable : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 user;
    B24@0:8@"NSString"16 accountUserDetails;
}

/* class methods */
+ (void)assimilateCollection:(id)collection intoModelContext:(id)context completion:(id /* block */)completion;

/* instance methods */
- (id)initWithUser:(id)user accountUserDetails:(id)details;
- (void)assimilateIntoModelContext:(id)context;
- (id)init;

@end

#endif /* TFSTwitterUserAssimilatable_h */
