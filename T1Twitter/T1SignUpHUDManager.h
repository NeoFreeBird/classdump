//
#ifndef T1SignUpHUDManager_h
#define T1SignUpHUDManager_h
@import Foundation;

@class NSObject, TFNHUD;

@interface T1SignUpHUDManager : NSObject

@property (nonatomic) unsigned long long hudRetainCount;
@property (readonly, nonatomic) TFNHUD *submissionHUD;

/* class methods */
+ (void)incrementSignUpWorkBeingPerformedBegin:(_Bool)begin;
+ (void)decrementSignUpWorkBeingPerformed;
+ (id)_sharedInstance;

/* instance methods */
- (id)init;
- (void)_increment:(_Bool)_increment;
- (void)_decrement;

@end

#endif /* T1SignUpHUDManager_h */
