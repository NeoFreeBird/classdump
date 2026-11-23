//
#ifndef TAVSharedAudioSession_h
#define TAVSharedAudioSession_h
@import Foundation;

@class NSObject;

@interface TAVSharedAudioSession : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 otherAudioObservers;
    @40@0:8:16@24@32 $__lazy_storage_$_isOtherAudioPlaying;
    @40@0:8:16@24@32 queue;
}

@property (nonatomic) _Bool isOtherAudioPlaying;
@property (nonatomic) _Bool isDeactivating;
@property (nonatomic, readonly) _Bool isSuspended;

/* class methods */
+ (id)deactivationNotification;
+ (id)audioSessionClaimedNotification;
+ (id)configurationDidChangeNotification;
+ (id)sharedSession;

/* instance methods */
- (void)configure;
- (id)requestCategory:(id)category mode:(id)mode options:(unsigned long long)options label:(id)label;
- (id)suspendWithLabel:(id)label;
- (id)suspendWithCategory:(id)category mode:(id)mode options:(unsigned long long)options label:(id)label;
- (void)requestDeactivationWithLabel:(id)label;
- (id)getDescriptionForBugReport;
- (id)init;

@end

#endif /* TAVSharedAudioSession_h */
