//
#ifndef TAVUIAutoplayManager_h
#define TAVUIAutoplayManager_h
@import Foundation;

@class NSObject;

@interface TAVUIAutoplayManager : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 candidateAutoplayables;
    @40@0:8:16@24@32 needsUpdate;
    @40@0:8:16@24@32 filterPolicies;
    @40@0:8:16@24@32 $__lazy_storage_$_filterPolicyNames;
    @40@0:8:16@24@32 dispatcher;
    @40@0:8:16@24@32 sortPolicy;
    @40@0:8:16@24@32 environment;
    @40@0:8:16@24@32 debugOverlay;
}

/* instance methods */
- (id)initWithMaxActiveAutoplayablesCount:(long long)count sortPolicy:(id)policy filterPolicies:(id)policies;
- (void)dealloc;
- (void)addCandidateAutoplayable:(id)autoplayable;
- (void)removeCandidateAutoplayable:(id)autoplayable;
- (void)debugOverlaySwitchWasEnabled;
- (void)debugOverlaySwitchWasDisabled;
- (id)init;

@end

#endif /* TAVUIAutoplayManager_h */
