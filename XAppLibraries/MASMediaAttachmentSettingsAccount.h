//
#ifndef MASMediaAttachmentSettingsAccount_h
#define MASMediaAttachmentSettingsAccount_h
@import Foundation;

@class NSObject;

@interface MASMediaAttachmentSettingsAccount : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 userID;
    @40@0:8:16@24@32 featureSwitches;
    @40@0:8:16@24@32 scribe;
    @40@0:8:16@24@32 isMediaAllowDownloadSettingAvailable;
    @40@0:8:16@24@32 isBlockGrokModificationsSettingAvailable;
}

/* instance methods */
- (id)initWithUserID:(long long)id featureSwitches:(id)switches isMediaAllowDownloadSettingAvailable:(_Bool)available isBlockGrokModificationsSettingAvailable:(_Bool)available scribe:(id)scribe;
- (id)init;

@end

#endif /* MASMediaAttachmentSettingsAccount_h */
