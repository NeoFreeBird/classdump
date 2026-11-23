//
#ifndef T1CustomPrimaryColorConfig_h
#define T1CustomPrimaryColorConfig_h
@import Foundation;

@class NSObject;

@interface T1CustomPrimaryColorConfig : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *migrationHelper;
    NSNumber"16@0:8 *updateObserver;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (_Bool)isCustomPrimaryColorEnabled;
- (id)init;

@end

#endif /* T1CustomPrimaryColorConfig_h */
