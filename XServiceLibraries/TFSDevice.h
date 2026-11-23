//
#ifndef TFSDevice_h
#define TFSDevice_h
@import Foundation;

@class NSObject;

@interface TFSDevice : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 deviceUDID;
    B24@0:8@"NSString"16 cachedGuestId;
}

@property (nonatomic) _Bool isRestoredFromDifferentDevice;

/* class methods */
+ (id)currentDevice;
+ (unsigned long long)tfs_calculateGuestIdFromUdid:(id)udid;

/* instance methods */
- (id)init;
- (id)uniqueIdentifier;
- (unsigned long long)guestId;
- (id)modelName;

@end

#endif /* TFSDevice_h */
