//
#ifndef TFSParsedTwitterStatusWrapper_h
#define TFSParsedTwitterStatusWrapper_h
@import Foundation;

@class NSObject;

@interface TFSParsedTwitterStatusWrapper : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 status;
    B24@0:8@"NSString"16 fromUser;
    B24@0:8@"NSString"16 retweetedStatus;
    B24@0:8@"NSString"16 quotedStatus;
    B24@0:8@"NSString"16 $__lazy_storage_$_statusResults;
    B24@0:8@"NSString"16 $__lazy_storage_$_assimilatableCollection;
}

/* instance methods */
- (id)statusBundleWithUsers:(id)users;
- (id)init;

@end

#endif /* TFSParsedTwitterStatusWrapper_h */
