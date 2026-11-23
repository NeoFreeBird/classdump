//
#ifndef TLPGlobalConfiguration_h
#define TLPGlobalConfiguration_h
@import Foundation;

@class NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface TLPGlobalConfiguration : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_disabledEvents;
}

@property _Bool enabled;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initInternal;
- (_Bool)isEnabled;
- (void)disableEventsWithType:(long long)type;
- (void)enableEventsWithType:(long long)type;
- (_Bool)isEventTypeEnabled:(long long)enabled;

@end

#endif /* TLPGlobalConfiguration_h */
