//
#ifndef TASSharingEvent_h
#define TASSharingEvent_h
@import Foundation;

@class NSObject, NSString;

@interface TASSharingEvent : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 user;
    @40@0:8:16@24@32 eventType;
    @40@0:8:16@24@32 sharingID;
}

@property (nonatomic, readonly) NSString *eventString;

/* class methods */
+ (id)parsingEventString:(id)string fromUser:(id)user;

/* instance methods */
- (id)init;

@end

#endif /* TASSharingEvent_h */
