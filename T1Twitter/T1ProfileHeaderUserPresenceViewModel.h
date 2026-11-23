//
#ifndef T1ProfileHeaderUserPresenceViewModel_h
#define T1ProfileHeaderUserPresenceViewModel_h
@import Foundation;

@class NSObject, TFSTwitterUserPresenceInfo;

@interface T1ProfileHeaderUserPresenceViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *delegate;
    NSNumber"16@0:8 *userDataSource;
    NSNumber"16@0:8 *context;
}

@property (nonatomic, readonly) long long displayType;
@property (nonatomic, retain) TFSTwitterUserPresenceInfo *presence;

/* instance methods */
- (_Bool)shouldDisplayPopupOriginatingAt:(id)at;
- (void)dealloc;
- (void)userDataSourceDidUpdateWithNotification:(id)notification;
- (id)init;

@end

#endif /* T1ProfileHeaderUserPresenceViewModel_h */
