//
#ifndef TFSTwitterStatusCompositionPendingState_h
#define TFSTwitterStatusCompositionPendingState_h
@import Foundation;

@class NSObject;

@interface TFSTwitterStatusCompositionPendingState : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 identifier;
    B24@0:8@"NSString"16 token;
}

/* instance methods */
- (id)initWithStatusID:(long long)id;
- (void)registerWithModelContext:(id)context;
- (void)unregisterWithModelContext:(id)context;
- (void)promoteWithModelContext:(id)context;
- (id)init;

@end

#endif /* TFSTwitterStatusCompositionPendingState_h */
