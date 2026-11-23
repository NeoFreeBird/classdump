//
#ifndef T1StatusAttachmentSensitiveContentRevealedContentStore_h
#define T1StatusAttachmentSensitiveContentRevealedContentStore_h
@import Foundation;

@class NSMutableSet, NSObject;

@interface T1StatusAttachmentSensitiveContentRevealedContentStore : NSObject {
    /* instance variables */
    NSMutableSet *_revealedSet;
}

@property (nonatomic) _Bool didVerifyAgeForSensitiveMediaDuringSession;

/* instance methods */
- (id)init;
- (void)_didVerifyAgeForSensitiveMedia;
- (_Bool)isSensitiveContentRevealedForStatus:(long long)status;
- (void)setSensitiveContentRevealed:(_Bool)revealed forStatus:(long long)status;
- (_Bool)isSensitiveContentRevealedForMediaID:(id)id;
- (void)setSensitiveContentRevealed:(_Bool)revealed forMediaID:(id)id;

@end

#endif /* T1StatusAttachmentSensitiveContentRevealedContentStore_h */
